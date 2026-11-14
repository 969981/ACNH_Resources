
uint FUN_0196ffcc(undefined8 param_1,undefined8 *param_2,float *param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  long *local_68;
  undefined1 local_60 [4];
  int aiStack_5c [3];
  undefined1 auStack_50 [16];
  int local_24;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar2 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar12 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_68 = (long *)(PTR_DAT_04bb2010 + 0x10);
  local_60 = (undefined1  [4])((int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0));
  aiStack_5c[0] = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  puVar6 = (undefined2 *)FUN_01a5190c(&local_80,0,&local_68,0);
  local_88 = *puVar6;
  local_86 = *(undefined1 *)(puVar6 + 1);
  local_85 = *(undefined1 *)((long)puVar6 + 3);
  local_84 = *(undefined4 *)(puVar6 + 2);
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  if ((((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
       ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
      (*(long *)(lVar11 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)) {
    uVar3 = FUN_0277d6c4(&local_88);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_a0,&local_88);
      iVar2 = FUN_0123db50(auStack_98,local_90);
      uVar3 = (uint)param_4;
      if (iVar2 == 0x2e) {
        if ((2 < (uVar3 & 0xff)) ||
           (uVar7 = FUN_0122c1e0(param_3,&local_68,aiStack_5c,auStack_50), (uVar7 & 1) == 0)) {
          uVar3 = 0;
          *param_2 = 0;
          *(undefined4 *)(param_2 + 1) = 0;
          goto LAB_01970528;
        }
        puVar12 = (undefined8 *)(local_60 + (param_4 & 0xff) * 0xc + -8);
LAB_01970304:
        *param_2 = *puVar12;
        uVar10 = *(undefined4 *)(puVar12 + 1);
LAB_01970310:
        *(undefined4 *)(param_2 + 1) = uVar10;
        uVar3 = 1;
        goto LAB_01970528;
      }
      iVar4 = FUN_0123db50(auStack_98,local_90);
      puVar1 = PTR_DAT_04bb27c0;
      if (iVar4 - 0x23U < 9) {
        lVar11 = *(long *)PTR_DAT_04bb27c0;
        if (lVar11 != 0) {
          uVar14 = *(uint *)PTR_DAT_04bb4b88;
          if ((((uVar14 == 0) ||
               (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                    ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
              ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14))
          {
            plVar13 = (long *)0x0;
          }
          if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar11 = *(long *)puVar1;
            iVar4 = (**(code **)(*plVar8 + 0x60))();
            if (iVar4 < 0x11) {
              uVar14 = 1;
            }
            else {
              if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_019703a4;
              uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_019703a4:
            uVar14 = 0;
          }
          if (plVar13 != (long *)0x0) {
            if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb4b78);
            }
            uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb4b70);
            if (((uVar14 & uVar5) == 1) && ((char)plVar13[0x7e] != '\0')) {
              local_68 = (long *)CONCAT44(local_68._4_4_,iVar2);
              if (0 < (int)plVar13[0x6a]) {
                uVar7 = 0;
                local_24 = iVar2;
                do {
                  if (uVar7 < *(uint *)(plVar13 + 0x66)) {
                    lVar11 = *(long *)(plVar13[0x67] + uVar7 * 8);
                  }
                  else {
                    lVar11 = 0;
                  }
                  uVar9 = (**(code **)(*(long *)(lVar11 + 0x30) + 0x118))
                                    ((long *)(lVar11 + 0x30),&local_24);
                  if ((((uVar9 & 1) != 0) && (uVar7 < *(uint *)(plVar13 + 0x66))) &&
                     ((int)(uVar3 & 0xff) < *(int *)(*(long *)(plVar13[0x67] + uVar7 * 8) + 0xd8)))
                  {
                    puVar12 = (undefined8 *)
                              (**(code **)(**(long **)(*(long *)(*(long *)(plVar13[0x67] + uVar7 * 8
                                                                          ) + 0xc0) +
                                                      (param_4 & 0xff) * 8) + 0xf0))();
                    uVar10 = *(undefined4 *)(puVar12 + 1);
                    *param_2 = *puVar12;
                    goto LAB_01970310;
                  }
                  uVar7 = uVar7 + 1;
                } while ((long)uVar7 < (long)(int)plVar13[0x6a]);
              }
            }
          }
        }
      }
      else {
        iVar4 = FUN_0123db50(auStack_98,local_90);
        if (iVar4 - 0xbU < 7) {
          uVar7 = FUN_01a1d000(auStack_a0);
          if ((uVar7 & 1) == 0) {
            FUN_0071ca50(&local_68,PTR_DAT_04bb4b88,0);
            plVar13 = local_68;
            if (local_68 != (long *)0x0) {
              if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb4b78);
              }
              uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb4b70);
              if ((uVar7 & 1) == 0) {
                local_60[2] = 0;
              }
            }
            uVar3 = 0;
            if ((local_60[2] == '\0') || (local_68 == (long *)0x0)) goto LAB_01970528;
            if ((char)local_68[0x7e] != '\0') {
              plVar13 = local_68 + 0x7f;
              goto LAB_01970418;
            }
          }
          else if ((uVar3 & 0xff) < 4) {
            puVar12 = (undefined8 *)(&DAT_041774b0 + (param_4 & 0xff) * 0xc);
            goto LAB_01970304;
          }
        }
        else {
          iVar4 = FUN_0123db50(auStack_98,local_90);
          if (iVar4 - 0x12U < 6) {
            FUN_0071ca50(&local_68,PTR_DAT_04bb4b88,0);
            plVar13 = local_68;
            if (local_68 != (long *)0x0) {
              if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb4b78);
              }
              uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb4b70);
              if ((uVar7 & 1) == 0) {
                local_60[2] = 0;
              }
            }
            uVar3 = 0;
            if ((local_60[2] == '\0') || (local_68 == (long *)0x0)) goto LAB_01970528;
            if ((char)local_68[0x7e] != '\0') {
              plVar13 = local_68 + 0xa8;
LAB_01970418:
              uVar3 = FUN_01a09250(plVar13,param_2,iVar2,param_4 & 0xffffffff);
              goto LAB_01970528;
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_01970528:
  return uVar3 & 1;
}

