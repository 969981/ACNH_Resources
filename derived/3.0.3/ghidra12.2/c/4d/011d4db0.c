
undefined8 FUN_011d4db0(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  char local_c8;
  char local_c7;
  undefined4 local_bc;
  long *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  long *local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  int local_80 [2];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar6 = PTR_DAT_04bbbc68;
  if (0 < *(int *)(param_1 + 0x24f78)) {
    uVar3 = *(uint *)(param_2 + 8) & 0xfffffffe;
    iVar9 = 0;
    puVar13 = (undefined1 *)(param_1 + 0x2e7);
    lVar12 = param_1 + 0x1dde8;
    uVar4 = *(uint *)(param_2 + 0xc) & 0xfffffffe;
    plVar1 = (long *)(PTR_DAT_04bb2010 + 0x10);
    puVar2 = PTR_DAT_04bbbaf0 + 0x10;
    do {
      if (((((*(ushort *)(puVar13 + -7) >> 3 & 1) != 0) &&
           ((*(ushort *)(puVar13 + -7) >> 4 & 1) == 0)) && (*(uint *)(puVar13 + -0x57) == uVar3)) &&
         (*(uint *)(puVar13 + -0x53) == uVar4)) {
        local_68 = *(undefined4 *)(puVar13 + -0x6f);
        uStack_64 = *(undefined4 *)(puVar13 + -0x6b);
        lVar14 = *(long *)puVar6;
        if (((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
             ((*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0 &&
              ((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0))))
             )) && (*(long *)(lVar14 + 0x2b0) != 0)) &&
           (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)) {
          uVar7 = FUN_0277d6c4(&local_68);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (iVar8 = FUN_0277d6c4(&local_68), iVar8 != 0xea79)) {
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
              FUN_0124c030(&local_b8,&local_68);
              uVar10 = FUN_0123d890(local_a8,4);
              if (((uVar10 & 1) != 0) && (uVar10 = FUN_0123d890(local_a8,0), (uVar10 & 1) == 0))
              goto LAB_011d4e50;
            }
            iVar8 = FUN_0277ebd0(&local_68);
            if (iVar8 != 0) {
              if (*(int *)(puVar13 + -0xf) != 0) {
                local_80[0] = DAT_050dfb2c;
                if (*(int *)(puVar13 + -0xf) == 2) {
                  local_80[0] = DAT_050dfb30;
                }
                if (local_80[0] == 0) goto LAB_011d4e50;
                local_d0 = *(undefined4 *)(param_1 + 0x230);
                FUN_0071cb58(&local_b8,local_80,&local_d0,0);
                plVar5 = local_b8;
                if (local_b8 != (long *)0x0) {
                  if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbbb50,PTR_DAT_04bbbb48), iVar8 != 0)) {
                    *(undefined **)PTR_DAT_04bbbb48 = puVar2;
                    __cxa_guard_release(PTR_DAT_04bbbb50);
                  }
                  uVar10 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bbbb48);
                  if ((uVar10 & 1) == 0) {
                    local_b0._0_3_ = (uint3)(ushort)local_b0;
                  }
                }
                if ((((local_b8 != (long *)0x0) && ((char)local_b0 != '\0')) &&
                    (local_b0._2_1_ != '\0')) &&
                   ((uVar7 = *(uint *)(puVar13 + -0x17), -1 < (int)uVar7 &&
                    ((int)uVar7 < (int)local_b8[0x8cf2])))) {
                  plVar5 = local_b8 + 0x4f + (ulong)uVar7 * 0x24;
                  if (999 < uVar7) {
                    plVar5 = local_b8 + 0x4f;
                  }
                  if ((*(int *)((long)plVar5 + 0xfc) != 4) &&
                     (((int)plVar5[0x20] == 3 || (*(char *)((long)plVar5 + 0x11a) != -1))))
                  goto LAB_011d4e50;
                }
              }
              FUN_0124c030(local_80,&local_68);
              local_98 = 0x400000000;
              uStack_90 = 0xffffff00000024;
              local_88 = 0;
              local_b8 = plVar1;
              local_b0 = uVar3;
              uStack_ac = uVar4;
              local_a8 = plVar1;
              local_a0 = uVar3;
              uStack_9c = uVar4;
              uVar10 = FUN_0123d890(local_70,4);
              uVar11 = FUN_0123db50(auStack_78,local_70);
              if (((uVar10 & 1) != 0) || ((int)uVar11 - 0xbU < 7)) {
                if (*(int *)(puVar13 + -0xf) == 0) {
                  if ((param_3 & 1) == 0) {
                    local_bc = *(undefined4 *)(puVar13 + -0x67);
                    local_d4 = *(undefined4 *)(param_1 + 0x230);
                    FUN_0071c8d0(&local_d0,&local_bc,&local_d4,0);
                    plVar1 = (long *)CONCAT44(uStack_cc,local_d0);
                    if (plVar1 != (long *)0x0) {
                      if (((*PTR_DAT_04bbbb00 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb00), iVar9 != 0)) {
                        *(undefined **)PTR_DAT_04bbbaf8 = PTR_DAT_04bb2e50 + 0x10;
                        __cxa_guard_release(PTR_DAT_04bbbb00);
                      }
                      uVar10 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbaf8);
                      if ((uVar10 & 1) == 0) {
                        local_c7 = '\0';
                      }
                    }
                    plVar1 = (long *)CONCAT44(uStack_cc,local_d0);
                    if (((plVar1 != (long *)0x0) && (local_c8 != '\0')) && (local_c7 != '\0')) {
                      (**(code **)(*plVar1 + 0xf8))(plVar1,&local_b8,0);
                    }
                  }
                  else {
                    if (*(int *)(param_1 + 0x1ddf0) != -1) {
                      if (*(int *)(param_1 + 0x1de00) == -1) {
                        lVar12 = param_1 + 0x1ddf8;
                      }
                      else if (*(int *)(param_1 + 0x1de10) == -1) {
                        lVar12 = param_1 + 0x1de08;
                      }
                      else if (*(int *)(param_1 + 0x1de20) == -1) {
                        lVar12 = param_1 + 0x1de18;
                      }
                      else if (*(int *)(param_1 + 0x1de30) == -1) {
                        lVar12 = param_1 + 0x1de28;
                      }
                      else if (*(int *)(param_1 + 0x1de40) == -1) {
                        lVar12 = param_1 + 0x1de38;
                      }
                      else if (*(int *)(param_1 + 0x1de50) == -1) {
                        lVar12 = param_1 + 0x1de48;
                      }
                      else if (*(int *)(param_1 + 0x1de60) == -1) {
                        lVar12 = param_1 + 0x1de58;
                      }
                      else if (*(int *)(param_1 + 0x1de70) == -1) {
                        lVar12 = param_1 + 0x1de68;
                      }
                      else if (*(int *)(param_1 + 0x1de80) == -1) {
                        lVar12 = param_1 + 0x1de78;
                      }
                      else if (*(int *)(param_1 + 0x1de90) == -1) {
                        lVar12 = param_1 + 0x1de88;
                      }
                      else if (*(int *)(param_1 + 0x1dea0) == -1) {
                        lVar12 = param_1 + 0x1de98;
                      }
                      else if (*(int *)(param_1 + 0x1deb0) == -1) {
                        lVar12 = param_1 + 0x1dea8;
                      }
                      else if (*(int *)(param_1 + 0x1dec0) == -1) {
                        lVar12 = param_1 + 0x1deb8;
                      }
                      else if (*(int *)(param_1 + 0x1ded0) == -1) {
                        lVar12 = param_1 + 0x1dec8;
                      }
                      else if (*(int *)(param_1 + 0x1dee0) == -1) {
                        lVar12 = param_1 + 0x1ded8;
                      }
                      else if (*(int *)(param_1 + 0x1def0) == -1) {
                        lVar12 = param_1 + 0x1dee8;
                      }
                      else if (*(int *)(param_1 + 0x1df00) == -1) {
                        lVar12 = param_1 + 0x1def8;
                      }
                      else if (*(int *)(param_1 + 0x1df10) == -1) {
                        lVar12 = param_1 + 0x1df08;
                      }
                      else if (*(int *)(param_1 + 0x1df20) == -1) {
                        lVar12 = param_1 + 0x1df18;
                      }
                      else if (*(int *)(param_1 + 0x1df30) == -1) {
                        lVar12 = param_1 + 0x1df28;
                      }
                      else if (*(int *)(param_1 + 0x1df40) == -1) {
                        lVar12 = param_1 + 0x1df38;
                      }
                      else if (*(int *)(param_1 + 0x1df50) == -1) {
                        lVar12 = param_1 + 0x1df48;
                      }
                      else if (*(int *)(param_1 + 0x1df60) == -1) {
                        lVar12 = param_1 + 0x1df58;
                      }
                      else if (*(int *)(param_1 + 0x1df70) == -1) {
                        lVar12 = param_1 + 0x1df68;
                      }
                      else if (*(int *)(param_1 + 0x1df80) == -1) {
                        lVar12 = param_1 + 0x1df78;
                      }
                      else if (*(int *)(param_1 + 0x1df90) == -1) {
                        lVar12 = param_1 + 0x1df88;
                      }
                      else {
                        if (*(int *)(param_1 + 0x1dfa0) != -1) {
                          return 1;
                        }
                        lVar12 = param_1 + 0x1df98;
                      }
                    }
                    *(uint *)(lVar12 + 8) = uVar3;
                    *(uint *)(lVar12 + 0xc) = uVar4;
                  }
                  return 1;
                }
                *(undefined4 *)(puVar13 + -0x4b) = 0;
                *(ushort *)(puVar13 + -7) = *(ushort *)(puVar13 + -7) | 0x10;
                *(undefined4 *)(puVar13 + -0xb) = 4;
                *puVar13 = 0xff;
                uVar10 = FUN_011e7000(uVar11,puVar13 + -0x6f);
                if ((uVar10 & 1) != 0) {
                  return 1;
                }
              }
            }
          }
        }
      }
LAB_011d4e50:
      iVar9 = iVar9 + 1;
      puVar13 = puVar13 + 0x78;
    } while (iVar9 < *(int *)(param_1 + 0x24f78));
  }
  return 0;
}

