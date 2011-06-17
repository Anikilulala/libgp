/**************************************************************
 libgp - Gaussian Process library for Machine Learning
 Copyright (C) 2011 Universität Freiburg
 Author: Manuel Blum
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 ***************************************************************/

#ifndef __COV_RQ_ISO_H__
#define __COV_RQ_ISO_H__

#include "cov.h"

namespace libgp
{
  /** Isotropic rational quadratic covariance function.
   *  @ingroup cov_group
   *  @author Manuel Blum
   */
  class CovRQiso : public CovarianceFunction
  {
  public:
    CovRQiso ();
    virtual ~CovRQiso ();
    bool init(int n);
    double get(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2);
    void grad(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2, Eigen::VectorXd &grad);
    void set_loghyper(const Eigen::VectorXd &p);
    virtual std::string to_string();
  private:
    double ell;
    double sf2;
    double alpha;
  };
  
}

#endif /* __COV_RQ_ISO_H__ */
