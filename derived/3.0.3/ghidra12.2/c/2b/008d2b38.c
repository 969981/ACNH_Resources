
void FUN_008d2b38(long param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined **local_78;
  char *pcStack_70;
  int local_64;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    uVar15 = 0;
  }
  else {
    local_78 = (undefined **)CONCAT44(local_78._4_4_,0x13);
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar15 = *puVar20 >> 0x13 & 1;
  }
  iVar1 = *(int *)(param_1 + 0x30964);
  local_84 = 0x500000003;
  local_7c = 4;
  local_90 = 0x500000006;
  local_88 = 7;
  puVar19 = &local_90;
  if (uVar15 == 0) {
    puVar19 = &local_84;
  }
  iVar2 = *(int *)((long)puVar19 + (long)iVar1 * 4);
  if (0 < *(int *)(param_1 + 0x3095c)) {
    *(int *)(param_1 + 0x3095c) = *(int *)(param_1 + 0x3095c) + -1;
    goto LAB_008d2f04;
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if (lVar12 == 0) {
    pbVar13 = &DAT_0548e140;
LAB_008d2c80:
    if (*pbVar13 < 8) goto LAB_008d2cec;
LAB_008d2c8c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_008d2ce4:
      pbVar13 = &DAT_0548e168;
      goto LAB_008d2cec;
    }
    lVar12 = *DAT_0537d558;
    bVar14 = *(byte *)(lVar12 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar14 != 0xffffffffffffffff) {
      puVar20 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
      if (7 < bVar14) {
        puVar20 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar20 & 8) != 0) {
        pbVar13 = (byte *)(lVar12 + 0x471);
      }
    }
    uVar17 = (uint)*pbVar13;
    if (7 < *pbVar13) goto LAB_008d2ce4;
  }
  else {
    pbVar13 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar13 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008d2c80;
      }
      goto LAB_008d2c8c;
    }
LAB_008d2cec:
    uVar17 = (uint)*pbVar13;
    if (7 < uVar17) {
      uVar17 = 0xff;
    }
  }
  uVar7 = uVar17;
  if (7 < uVar17) {
    uVar7 = 0xff;
  }
  local_64 = CONCAT31(local_64._1_3_,(char)uVar7);
  iVar16 = iVar1;
  if (*(char *)(param_1 + 0x315c8) == '\0') {
    if (0 < *(int *)(param_1 + 0x315b8)) {
      iVar4 = *(int *)(param_1 + 0x315b8) + *(int *)(param_1 + 0x315b4) + -1;
      iVar9 = 0;
      if (*(int *)(param_1 + 0x315b0) <= iVar4) {
        iVar9 = *(int *)(param_1 + 0x315b0);
      }
      if (*(int *)(*(long *)(param_1 + 0x315a8) + (long)(iVar4 - iVar9) * 4) != 1) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(&DAT_054f0960);
            puVar19 = &DAT_054f0958;
            if (iVar9 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar19 = &DAT_054f0958;
          }
        }
        else {
          puVar19 = (undefined8 *)(DAT_054f5738 + 0x204);
          if (uVar17 < 8) {
            puVar19 = puVar19 + uVar17;
          }
        }
        local_78 = (undefined **)CONCAT44(local_78._4_4_,0x20);
        if ((*(uint *)((long)puVar19 + 4) & 1) == 0) goto LAB_008d2d18;
      }
    }
  }
  else {
LAB_008d2d18:
    uVar7 = FUN_02582d8c(&local_64,1);
    lVar12 = DAT_04d02f58;
    puVar5 = PTR_DAT_04bb4fb8;
    if ((uVar7 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
      uVar7 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d8);
      uVar18 = (ulong)uVar7;
      if ((-1 < (int)uVar7) && (DAT_04d02f58 != 0)) {
        uVar8 = FUN_02582d8c(&local_64,1);
        puVar6 = PTR_DAT_04bb7ff8;
        if ((uVar8 < 8) && (*(char *)(*(long *)puVar5 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) {
          uVar8 = *(uint *)(*(long *)puVar5 + (ulong)uVar8 * 0x13f0 + 0x13d8);
          uVar10 = (ulong)uVar8;
          if ((-1 < (int)uVar8) && (DAT_04d02f58 != 0)) {
            if (3 < uVar8) {
              uVar10 = 0;
            }
            lVar11 = *(long *)(DAT_04d02f58 + uVar10 * 8 + 0xf5b20);
            if (lVar11 != 0) {
              if (3 < uVar7) {
                uVar18 = 0;
              }
              if (*(uint *)(lVar12 + uVar18 * 4 + 0xf5b40) < 3) {
                if ((*(uint *)(lVar11 + 0x8c) >> 0x18 & 1) != 0) goto LAB_008d3128;
                uVar17 = *(uint *)(lVar11 + 0x8c) & 0x2000000;
LAB_008d3110:
                if (uVar17 != 0) {
                  if (0 < iVar1) {
                    iVar16 = 1;
                  }
                  iVar16 = iVar16 + 1;
                }
              }
              else {
                if ((*(long *)PTR_DAT_04bb7ff8 == 0) ||
                   (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
                  if ((DAT_054f5738 == 0) &&
                     (((DAT_054f0960 & 1) == 0 &&
                      (iVar9 = __cxa_guard_acquire(&DAT_054f0960), iVar9 != 0)))) {
                    DAT_054f0958 = 0;
                    __cxa_guard_release(&DAT_054f0960);
                  }
                  local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
                }
                lVar12 = *(long *)puVar6;
                if ((lVar12 == 0) || (*(int *)(lVar12 + 0x588) == 0)) {
                  if (DAT_054f5738 == 0) {
                    if ((DAT_054f0960 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
                      puVar20 = (uint *)&DAT_054f0958;
                      if (iVar9 != 0) {
                        DAT_054f0958 = 0;
                        __cxa_guard_release(&DAT_054f0960);
                      }
                    }
                    else {
                      puVar20 = (uint *)&DAT_054f0958;
                    }
                  }
                  else {
                    puVar20 = (uint *)(DAT_054f5738 + 0x204);
                    if (uVar17 < 8) {
                      puVar20 = puVar20 + (ulong)uVar17 * 2;
                    }
                  }
                  local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
                  if ((*puVar20 >> 0x19 & 1) == 0) goto LAB_008d3080;
LAB_008d3074:
                  bVar14 = *(byte *)(lVar11 + 0x8e) >> 4 & 1;
                }
                else {
                  if (*(int *)(param_1 + 0x30808) == 3) goto LAB_008d3074;
LAB_008d3080:
                  bVar14 = 0;
                }
                lVar12 = *(long *)puVar6;
                if ((lVar12 == 0) || (*(int *)(lVar12 + 0x588) == 0)) {
                  if (DAT_054f5738 == 0) {
                    if ((DAT_054f0960 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
                      puVar20 = (uint *)&DAT_054f0958;
                      if (iVar9 != 0) {
                        DAT_054f0958 = 0;
                        __cxa_guard_release(&DAT_054f0960);
                      }
                    }
                    else {
                      puVar20 = (uint *)&DAT_054f0958;
                    }
                  }
                  else {
                    puVar20 = (uint *)(DAT_054f5738 + 0x204);
                    if (uVar17 < 8) {
                      puVar20 = puVar20 + (ulong)uVar17 * 2;
                    }
                  }
                  local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
                  if ((*puVar20 >> 0x19 & 1) != 0) goto LAB_008d3104;
                }
                else if (*(int *)(param_1 + 0x30808) == 3) {
LAB_008d3104:
                  if (bVar14 == 0) {
                    uVar17 = *(uint *)(lVar11 + 0x8c) & 0x200000;
                    goto LAB_008d3110;
                  }
                  goto LAB_008d3128;
                }
                if (bVar14 != 0) {
LAB_008d3128:
                  if (iVar1 < 2) {
                    iVar16 = 1;
                  }
                  iVar16 = iVar16 + -1;
                }
              }
            }
          }
        }
      }
    }
  }
  local_64 = iVar16;
  if (iVar1 != iVar16) {
    *(undefined4 *)(param_1 + 0x3095c) = 10;
    *(int *)(param_1 + 0x30964) = iVar16;
    pcStack_70 = "Camera_Move_Up";
    if (iVar16 <= iVar1) {
      pcStack_70 = "Camera_Move_Down";
    }
    local_78 = &PTR_LAB_048f9770;
    FUN_03844960(param_1 + 0x37fc8,&local_78,0);
  }
  iVar1 = *(int *)(param_1 + 0x30964);
LAB_008d2f04:
  puVar19 = &local_90;
  if (uVar15 == 0) {
    puVar19 = &local_84;
  }
  iVar1 = *(int *)((long)puVar19 + (long)iVar1 * 4);
  local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar1);
  if (iVar2 != iVar1) {
    if (*(int *)(param_1 + 0x31080) != 0) {
      *(int *)(param_1 + 0x30800) = iVar1;
      *(code **)(param_1 + 0x37f68) = FUN_008c5c98;
      *(undefined8 *)(param_1 + 0x37f70) = 0;
      *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925a90;
      *(long *)(param_1 + 0x37f60) = param_1;
      lVar12 = *(long *)(*(long *)(param_1 + 0x31088) + (long)(*(int *)(param_1 + 0x31080) + -1) * 8
                        );
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 4) = 1;
      }
    }
    FUN_008c4aa0(param_1,*(undefined4 *)(param_1 + 0x307e8),0);
  }
  return;
}

