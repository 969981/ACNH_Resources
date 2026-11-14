
void FUN_017b7220(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined4 local_64;
  
  uVar6 = FUN_0180b7a0();
  if ((uVar6 & 1) == 0) {
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar4 = FUN_006bd550(*puVar7,0);
        iVar5 = 0;
        if ((iVar4 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
          iVar5 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_052923e8._4_4_ != iVar5) {
      uVar6 = (ulong)(short)DAT_04c487d4;
      if (uVar6 == 0xffffffffffffffff) {
LAB_017b7408:
        iVar5 = 0;
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            iVar5 = 0;
          }
          else {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            iVar5 = 0;
            if ((iVar4 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
              iVar5 = 0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
              }
            }
          }
        }
        if ((((DAT_0529240c != iVar5) && (uVar6 = FUN_0180b3e0(), (uVar6 & 1) == 0)) &&
            (uVar6 = FUN_0180b660(), (uVar6 & 1) == 0)) &&
           (uVar6 = FUN_017b7888(), (uVar6 & 1) == 0)) goto LAB_017b749c;
      }
      else {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,6);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)(short)DAT_04c487d4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 6 & 1) == 0) {
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,7);
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
          if (0xff < DAT_04c487d4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 7 & 1) == 0) {
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x15);
            puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
            if (0xff < DAT_04c487d4) {
              puVar2 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar2 >> 0x15 & 1) == 0) {
              local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x19);
              puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
              if (0xff < DAT_04c487d4) {
                puVar2 = (uint *)PTR_DAT_04bc39f8;
              }
              if (((*puVar2 >> 0x19 & 1) == 0) ||
                 (local_c0 = (undefined *)CONCAT44(local_c0._4_4_,7), (*puVar2 >> 7 & 1) == 0))
              goto LAB_017b7408;
            }
          }
        }
      }
      FUN_017e59e0(param_1 + 0xda0);
      goto LAB_017b749c;
    }
  }
  *(undefined4 *)(param_1 + 8) = 1;
LAB_017b749c:
  local_6d = 0;
  local_b0 = 0x40;
  puStack_b8 = local_ac;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_0180d000(&local_c0);
  lVar9 = DAT_05aed670;
  *(undefined1 *)(param_1 + 0xd0d) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined4 *)(param_1 + 0xd18) = 0;
  puVar3 = PTR_DAT_04bb2640;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar7,0);
    if ((iVar5 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))) {
      uVar10 = 0;
      uVar12 = 1;
      do {
        lVar9 = DAT_05aed670;
        if (DAT_05aed670 == 0) {
LAB_017b75e8:
          uVar8 = (uint)lVar9;
        }
        else {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            lVar9 = 0;
            goto LAB_017b75e8;
          }
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
          FUN_006bd550(*puVar7,0);
          lVar9 = DAT_05aed670;
          if (DAT_05aed670 == 0) goto LAB_017b75e8;
          if (*(long *)(DAT_05aed670 + 0x330) == 0) break;
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar7,0);
          lVar9 = 0;
          if ((iVar5 != 0x758f7eaf) || (lVar9 = DAT_05aed670, DAT_05aed670 == 0)) goto LAB_017b75e8;
          lVar9 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) == 0) goto LAB_017b75e8;
          uVar8 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x260);
        }
        if (uVar8 <= uVar10) break;
        if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
          FUN_006bd550(*puVar7,0);
          if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
            puVar7 = (undefined8 *)
                     (**(code **)(**(long **)puVar3 + 0x18))
                               (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar5 = FUN_006bd550(*puVar7,0);
            if ((((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
                (lVar9 = *(long *)(DAT_05aed670 + 0x330), lVar9 != 0)) &&
               (uVar10 < *(uint *)(lVar9 + 0x260))) {
              lVar9 = lVar9 + 0x250;
              if (6 < uVar10) {
                uVar8 = uVar12 & 0xfffffff8;
                do {
                  uVar8 = uVar8 - 8;
                  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar9 + 8) + 8) + 8) + 8) + 8) + 8) + 8) +
                                   8);
                } while (uVar8 != 0);
              }
              if ((uVar10 + 1 & 7) != 0) {
                uVar8 = uVar12 & 7;
                do {
                  lVar9 = *(long *)(lVar9 + 8);
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              if ((lVar9 != 0) && ((int *)(lVar9 + -0x40) != (int *)0x0)) {
                puVar7 = (undefined8 *)
                         (**(code **)(**(long **)puVar3 + 0x18))
                                   (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
                FUN_006bd550(*puVar7,0);
                if (DAT_055c1b60 != &DAT_055c1b58) {
                  uVar11 = 0;
                  puVar7 = DAT_055c1b60;
                  do {
                    if (*(int *)(puVar7 + -1) == *(int *)(lVar9 + -0x40)) goto LAB_017b7734;
                    puVar7 = (undefined8 *)puVar7[1];
                    uVar11 = uVar11 + 1;
                  } while (puVar7 != &DAT_055c1b58);
                }
                uVar11 = 0xffff;
LAB_017b7734:
                if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
                  puVar7 = (undefined8 *)
                           (**(code **)(**(long **)puVar3 + 0x18))
                                     (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
                  FUN_006bd550(*puVar7,0);
                }
                if (uVar11 != 0xffff) {
                  local_64 = 1;
                  puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
                  if ((uVar11 & 0xff00) != 0) {
                    puVar2 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if ((*puVar2 >> 1 & 1) != 0) {
                    *(undefined1 *)(param_1 + 0xd0d) = 1;
                    *(undefined4 *)(param_1 + 0xd10) = *(undefined4 *)(lVar9 + -0x34);
                    *(undefined4 *)(param_1 + 0xd14) = *(undefined4 *)(lVar9 + -0x30);
                    *(undefined4 *)(param_1 + 0xd18) = *(undefined4 *)(lVar9 + -0x2c);
                  }
                }
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar12 = uVar12 + 1;
      } while( true );
    }
  }
  FUN_017b6228(param_1);
  lVar9 = 0;
  *(undefined1 **)(param_1 + 0xfc0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xfc8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xfd0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xfd8) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xfe0) = 0x3f800000;
  do {
    lVar1 = param_1 + lVar9;
    lVar9 = lVar9 + 0x28;
    *(undefined1 *)(lVar1 + 0xc) = 0;
    *(undefined1 *)(lVar1 + 0x1c) = 0;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    *(undefined1 *)(lVar1 + 0x30) = 0;
  } while (lVar9 != 0x500);
  lVar9 = 0;
  do {
    lVar1 = param_1 + lVar9;
    lVar9 = lVar9 + 0x20;
    *(undefined2 *)(lVar1 + 0x50c) = 0;
    *(undefined2 *)(lVar1 + 0x51c) = 0;
  } while (lVar9 != 0x400);
  lVar9 = 0;
  do {
    lVar1 = param_1 + lVar9;
    lVar9 = lVar9 + 0x20;
    *(undefined2 *)(lVar1 + 0x90c) = 0;
    *(undefined2 *)(lVar1 + 0x91c) = 0;
  } while (lVar9 != 0x400);
  return;
}

