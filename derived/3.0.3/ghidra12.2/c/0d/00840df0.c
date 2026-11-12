
void FUN_00840df0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [31];
  undefined1 local_85;
  
  (**(code **)(*(long *)(param_1 + 0xd0) + 0xf0))((long *)(param_1 + 0xd0));
  (**(code **)(*(long *)(param_1 + 0x100) + 0xf0))(param_1 + 0x100);
  (**(code **)(*(long *)(param_1 + 0x130) + 0xf0))(param_1 + 0x130);
  (**(code **)(*(long *)(param_1 + 0x168) + 0xf0))(param_1 + 0x168);
  (**(code **)(*(long *)(param_1 + 0x1a0) + 0xf0))(param_1 + 0x1a0);
  (**(code **)(*(long *)(param_1 + 0x1d8) + 0xf0))(param_1 + 0x1d8);
  (**(code **)(*(long *)(param_1 + 0x210) + 0xf0))(param_1 + 0x210);
  (**(code **)(*(long *)(param_1 + 0x248) + 0xf0))(param_1 + 0x248);
  (**(code **)(*(long *)(param_1 + 0x280) + 0xf0))(param_1 + 0x280);
  (**(code **)(*(long *)(param_1 + 0x2b8) + 0xf0))(param_1 + 0x2b8);
  (**(code **)(*(long *)(param_1 + 0x2f0) + 0xf0))(param_1 + 0x2f0);
  (**(code **)(*(long *)(param_1 + 800) + 0xf0))(param_1 + 800);
  (**(code **)(*(long *)(param_1 + 0x350) + 0xf0))(param_1 + 0x350);
  if (0 < *(int *)(param_1 + 0x3b8)) {
    if ((uint)DAT_04cdb7d8 < 10) {
      puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7d8 * 8 + 200);
    }
    else {
      puVar4 = &DAT_0407ebb1;
    }
    FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x3c0) + 0xf0))();
    if (1 < *(int *)(param_1 + 0x3b8)) {
      if (DAT_04cdb7d8._4_4_ < 10) {
        puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7d8._4_4_ * 8 + 200);
      }
      else {
        puVar4 = &DAT_0407ebb1;
      }
      FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + 8) + 0xf0))();
      if (2 < *(int *)(param_1 + 0x3b8)) {
        if ((uint)DAT_04cdb7e0 < 10) {
          puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7e0 * 8 + 200);
        }
        else {
          puVar4 = &DAT_0407ebb1;
        }
        FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
        (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + 0x10) + 0xf0))();
        if (3 < *(int *)(param_1 + 0x3b8)) {
          if (DAT_04cdb7e0._4_4_ < 10) {
            puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7e0._4_4_ * 8 + 200);
          }
          else {
            puVar4 = &DAT_0407ebb1;
          }
          FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
          (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + 0x18) + 0xf0))();
          if (4 < *(int *)(param_1 + 0x3b8)) {
            if ((uint)DAT_04cdb7e8 < 10) {
              puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7e8 * 8 + 200);
            }
            else {
              puVar4 = &DAT_0407ebb1;
            }
            FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
            (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + 0x20) + 0xf0))();
            if (5 < *(int *)(param_1 + 0x3b8)) {
              if (DAT_04cdb7e8._4_4_ < 10) {
                puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7e8._4_4_ * 8 + 200);
              }
              else {
                puVar4 = &DAT_0407ebb1;
              }
              FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
              (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + 0x28) + 0xf0))();
              puVar2 = PTR_DAT_04bb3a98;
              if (6 < *(int *)(param_1 + 0x3b8)) {
                lVar6 = 6;
                do {
                  puVar4 = &DAT_0407ebb1;
                  if ((uint)DAT_04cdb7d8 < 10) {
                    puVar4 = *(undefined8 **)(puVar2 + (ulong)(uint)DAT_04cdb7d8 * 8 + 200);
                  }
                  FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
                  (**(code **)(**(long **)(*(long *)(param_1 + 0x3c0) + lVar6 * 8) + 0xf0))();
                  lVar6 = lVar6 + 1;
                } while (lVar6 < *(int *)(param_1 + 0x3b8));
              }
            }
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_04bb2028;
  if (0 < *(int *)(param_1 + 0x560)) {
    uVar5 = 0;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar1;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_0407bc3b,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x568) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x560));
  }
  if (0 < *(int *)(param_1 + 0x6b8)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040b4fb1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x6c0) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x6b8));
  }
  if (0 < *(int *)(param_1 + 0xdd8)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0xde0) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0xf38) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0xdd8));
  }
  if (0 < *(int *)(param_1 + 0x1088)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1090) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x11e8) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1088));
  }
  if (0 < *(int *)(param_1 + 0x1338)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1340) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1498) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1338));
  }
  if (0 < *(int *)(param_1 + 0x15e8)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x15f0) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1748) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x15e8));
  }
  (**(code **)(*(long *)(param_1 + 0x1860) + 0xf0))(param_1 + 0x1860);
  (**(code **)(*(long *)(param_1 + 0x1890) + 0xf0))(param_1 + 0x1890);
  (**(code **)(*(long *)(param_1 + 0x18c0) + 0xf0))(param_1 + 0x18c0);
  if (0 < *(int *)(param_1 + 0x1928)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_04080ddd,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1930) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1928));
  }
  if (0 < *(int *)(param_1 + 0x1a28)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_0407bc3b,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1a30) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1a28));
  }
  if (0 < *(int *)(param_1 + 0x1b40)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040b4fb1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1b48) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x1b40));
  }
  if (0 < *(int *)(param_1 + 0x2260)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2268) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2380) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x2260));
  }
  if (0 < *(int *)(param_1 + 0x2490)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2498) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x25b0) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x2490));
  }
  if (0 < *(int *)(param_1 + 0x26c0)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x26c8) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x27e0) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x26c0));
  }
  if (0 < *(int *)(param_1 + 0x28f0)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x28f8) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2a10) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x28f0));
  }
  (**(code **)(*(long *)(param_1 + 0x2ae8) + 0xf0))(param_1 + 0x2ae8);
  (**(code **)(*(long *)(param_1 + 0x2b18) + 0xf0))(param_1 + 0x2b18);
  (**(code **)(*(long *)(param_1 + 0x2b48) + 0xf0))(param_1 + 0x2b48);
  if (0 < *(int *)(param_1 + 0x2bb0)) {
    if ((uint)DAT_04cdb7d8 != 1) {
      if ((uint)DAT_04cdb7d8 < 10) {
        puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7d8 * 8 + 200);
      }
      else {
        puVar4 = &DAT_0407ebb1;
      }
      FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
    }
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x2bb8) + 0xf0))();
    if (1 < *(int *)(param_1 + 0x2bb0)) {
      if (DAT_04cdb7d8._4_4_ != 1) {
        if (DAT_04cdb7d8._4_4_ < 10) {
          puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7d8._4_4_ * 8 + 200);
        }
        else {
          puVar4 = &DAT_0407ebb1;
        }
        FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + 8) + 0xf0))();
      if (2 < *(int *)(param_1 + 0x2bb0)) {
        if ((uint)DAT_04cdb7e0 != 1) {
          if ((uint)DAT_04cdb7e0 < 10) {
            puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7e0 * 8 + 200);
          }
          else {
            puVar4 = &DAT_0407ebb1;
          }
          FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
        }
        (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + 0x10) + 0xf0))();
        if (3 < *(int *)(param_1 + 0x2bb0)) {
          if (DAT_04cdb7e0._4_4_ != 1) {
            if (DAT_04cdb7e0._4_4_ < 10) {
              puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7e0._4_4_ * 8 + 200);
            }
            else {
              puVar4 = &DAT_0407ebb1;
            }
            FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
          }
          (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + 0x18) + 0xf0))();
          if (4 < *(int *)(param_1 + 0x2bb0)) {
            if ((uint)DAT_04cdb7e8 != 1) {
              if ((uint)DAT_04cdb7e8 < 10) {
                puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)(uint)DAT_04cdb7e8 * 8 + 200);
              }
              else {
                puVar4 = &DAT_0407ebb1;
              }
              FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
            }
            (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + 0x20) + 0xf0))();
            if (5 < *(int *)(param_1 + 0x2bb0)) {
              if (DAT_04cdb7e8._4_4_ != 1) {
                if (DAT_04cdb7e8._4_4_ < 10) {
                  puVar4 = *(undefined8 **)(PTR_DAT_04bb3a98 + (ulong)DAT_04cdb7e8._4_4_ * 8 + 200);
                }
                else {
                  puVar4 = &DAT_0407ebb1;
                }
                FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
              }
              (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + 0x28) + 0xf0))();
              puVar2 = PTR_DAT_04bb3a98;
              if (6 < *(int *)(param_1 + 0x2bb0)) {
                lVar6 = 6;
                do {
                  if ((uint)DAT_04cdb7d8 != 1) {
                    puVar4 = &DAT_0407ebb1;
                    if ((uint)DAT_04cdb7d8 < 10) {
                      puVar4 = *(undefined8 **)(puVar2 + (ulong)(uint)DAT_04cdb7d8 * 8 + 200);
                    }
                    FUN_0071b954(&local_b8,&DAT_040a591a,puVar4);
                  }
                  (**(code **)(**(long **)(*(long *)(param_1 + 0x2bb8) + lVar6 * 8) + 0xf0))();
                  lVar6 = lVar6 + 1;
                } while (lVar6 < *(int *)(param_1 + 0x2bb0));
              }
            }
          }
        }
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x2d58)) {
    uVar5 = 0;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    do {
      puVar1 = &DAT_040a592c;
      if (9 < uVar5) {
        puVar1 = &DAT_040bf6f4;
      }
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      puVar3 = &DAT_0408bef1;
      if (9 < uVar5) {
        puVar3 = &UNK_040b4fbf;
      }
      local_b8 = puVar2;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,puVar1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2d60) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,puVar3,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30b8) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x2d58));
  }
  puVar2 = PTR_DAT_04bb2028;
  if (0 < *(int *)(param_1 + 0x3408)) {
    uVar5 = 0;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar1;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3410) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3528) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x3408));
  }
  if (0 < *(int *)(param_1 + 0x3638)) {
    uVar5 = 0;
    do {
      local_a8 = 0x20;
      local_85 = 0;
      local_a4[0] = 0;
      local_b8 = puVar2 + 0x10;
      puStack_b0 = local_a4;
      FUN_038d1270(&local_b8,&DAT_040a592c,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3640) + uVar5 * 8) + 0xf0))();
      FUN_038d1270(&local_b8,&DAT_0408bef1,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3758) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x3638));
  }
  (**(code **)(*(long *)(param_1 + 0x3830) + 0xf0))(param_1 + 0x3830);
  if (0 < *(int *)(param_1 + 0x3898)) {
    uVar5 = 0;
    do {
      FUN_006d8678(&local_b8,&DAT_0407bc3b,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x38a0) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x3898));
  }
  FUN_006d8678(&local_b8,"Min = 0, Max = %d",0x10);
  (**(code **)(*(long *)(param_1 + 0x3cb8) + 0xf0))(param_1 + 0x3cb8);
  (**(code **)(*(long *)(param_1 + 0x3ce8) + 0xf0))(param_1 + 0x3ce8);
  if (0 < *(int *)(param_1 + 0x3d50)) {
    uVar5 = 0;
    do {
      FUN_006d8678(&local_b8,&DAT_040aae95,uVar5 & 0xffffffff);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x3d58) + uVar5 * 8) + 0xf0))();
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x3d50));
    if (0 < *(int *)(param_1 + 0x3d50)) {
      uVar5 = 0;
      do {
        FUN_006d8678(&local_b8,&DAT_0406c300,uVar5 & 0xffffffff);
        (**(code **)(**(long **)(*(long *)(param_1 + 0x3e30) + uVar5 * 8) + 0xf0))();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(param_1 + 0x3d50));
    }
  }
  FUN_006d8678(&local_b8,"Min = 0, Max = %d",2);
  (**(code **)(*(long *)(param_1 + 0x3ec8) + 0xf0))(param_1 + 0x3ec8);
  (**(code **)(*(long *)(param_1 + 0x3ef8) + 0xf0))(param_1 + 0x3ef8);
  return;
}

