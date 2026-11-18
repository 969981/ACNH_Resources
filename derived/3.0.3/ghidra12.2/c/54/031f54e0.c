
/* WARNING: Removing unreachable block (ram,0x031f58e0) */
/* WARNING: Removing unreachable block (ram,0x031f5970) */
/* WARNING: Removing unreachable block (ram,0x031f56d8) */
/* WARNING: Removing unreachable block (ram,0x031f5808) */
/* WARNING: Removing unreachable block (ram,0x031f599c) */
/* WARNING: Removing unreachable block (ram,0x031f571c) */
/* WARNING: Removing unreachable block (ram,0x031f5874) */
/* WARNING: Removing unreachable block (ram,0x031f5944) */
/* WARNING: Removing unreachable block (ram,0x031f5694) */
/* WARNING: Removing unreachable block (ram,0x031f579c) */
/* WARNING: Removing unreachable block (ram,0x031f5760) */
/* WARNING: Removing unreachable block (ram,0x031f59c8) */

void FUN_031f54e0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  char cVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long local_58;
  long *local_50;
  undefined4 local_48;
  
  if (*(uint *)(param_1 + 0x340) <= param_2) {
    param_2 = 0;
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x348) + (long)(int)param_2 * 0x70 + 8)) {
  case 0x8c:
    uVar12 = (ulong)(short)DAT_04c487d4;
    if (uVar12 == 0xffffffffffffffff) {
LAB_031f5a20:
      lVar14 = FUN_033d0598(&DAT_0548e140);
      piVar15 = (int *)(lVar14 + 0x84c);
LAB_031f5a30:
      if (*piVar15 == 0) {
        lVar14 = 0;
      }
      else {
        if (DAT_05aed670 == 0) {
LAB_031f5aa0:
          iVar10 = 0;
        }
        else {
          iVar10 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar10 = FUN_006bd550(*puVar11,0);
            if ((iVar10 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_031f5aa0;
            iVar10 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar10 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
        if (DAT_05292418 == iVar10) {
          if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar10 = FUN_006bd550(*puVar11,0);
            if ((iVar10 == 0x758f7eaf) &&
               ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))) {
              iVar10 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
joined_r0x031f5ecc:
              if (iVar10 != 0) goto LAB_031f5ed0;
            }
          }
        }
        else {
          iVar10 = 0;
          if (DAT_05aed670 != 0) {
            if (*(long *)(DAT_05aed670 + 0x330) == 0) {
              iVar10 = 0;
            }
            else {
              puVar11 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar8 = FUN_006bd550(*puVar11,0);
              iVar10 = 0;
              if ((iVar8 == 0x758f7eaf) && (iVar10 = 0, DAT_05aed670 != 0)) {
                iVar10 = 0;
                if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                  iVar10 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                }
              }
            }
          }
          if (DAT_05292414 != iVar10) {
LAB_031f5ed0:
            lVar14 = 1;
            goto LAB_031f5edc;
          }
          if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar10 = FUN_006bd550(*puVar11,0);
            if ((iVar10 == 0x758f7eaf) &&
               ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))) {
              iVar10 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
              goto joined_r0x031f5ecc;
            }
          }
        }
        lVar14 = 4;
      }
    }
    else {
      puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar16 = (uint *)PTR_DAT_04bc39f8;
      }
      puVar1 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      local_58 = CONCAT44(local_58._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      lVar14 = DAT_05739190;
      if ((*puVar16 >> 0x19 & 1) == 0) {
        if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) {
          if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_031f5a20;
          if (DAT_05739190 != 0) {
            lVar14 = 0;
            if (*(long *)(DAT_05739190 + 0x470) != 0) {
              lVar13 = *(long *)(*(long *)(DAT_05739190 + 0x470) + 8);
              lVar14 = 0;
              if (lVar13 != 0) goto LAB_031f5a18;
            }
          }
        }
        else if (DAT_05739190 != 0) {
          lVar14 = 0;
          if (*(long **)(DAT_05739190 + 0x468) != (long *)0x0) {
            lVar13 = **(long **)(DAT_05739190 + 0x468);
            if (lVar13 != 0) goto LAB_031f5a18;
            lVar14 = 0;
          }
        }
      }
      else if (DAT_05739190 != 0) {
        lVar14 = 0;
        if (*(long *)(DAT_05739190 + 0x460) != 0) {
          lVar13 = *(long *)(*(long *)(DAT_05739190 + 0x460) + 0x18);
          if (lVar13 != 0) {
LAB_031f5a18:
            piVar15 = (int *)(lVar13 + 4);
            goto LAB_031f5a30;
          }
          lVar14 = 0;
        }
      }
    }
LAB_031f5edc:
    local_58 = *(long *)(param_1 + 0x218);
    plVar18 = (long *)(local_58 + 0x678);
    local_50 = (long *)plVar18[lVar14];
    *(long **)(param_1 + 0x3c0) = local_50;
    if (*(char *)(param_1 + 0x1c5ac) == '\0') {
      if (local_50 == (long *)0x0) {
        local_50 = (long *)*plVar18;
      }
      goto LAB_031f5f30;
    }
    if (local_50 == (long *)0x0) {
      local_50 = (long *)*plVar18;
    }
    break;
  case 0x8d:
    plVar18 = *(long **)(*(long *)(param_1 + 0x218) + 0x570);
    uVar6 = *(ushort *)PTR_DAT_04bb6298;
    uVar12 = (ulong)(short)uVar6;
    if (uVar12 == 0xffffffffffffffff) {
LAB_031f5bb0:
      lVar14 = FUN_033d0598(&DAT_0548e140);
      cVar5 = *(char *)(lVar14 + 0x860);
      uVar20 = *(uint *)(lVar14 + 0x850);
      uVar19 = *(uint *)(lVar14 + 0x854);
LAB_031f5bc8:
      bVar7 = cVar5 == '\0';
    }
    else {
      puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
      if (0xff < (uint)(int)(short)uVar6) {
        puVar16 = (uint *)PTR_DAT_04bc39f8;
      }
      puVar1 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < uVar6) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      local_58 = CONCAT44(local_58._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < uVar6) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*puVar16 >> 0x19 & 1) == 0) {
        if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) {
          if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_031f5bb0;
          if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x470) != 0)) {
            lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x470) + 8);
            goto joined_r0x031f5ba0;
          }
        }
        else if ((DAT_05739190 != 0) && (*(long **)(DAT_05739190 + 0x468) != (long *)0x0)) {
          lVar14 = **(long **)(DAT_05739190 + 0x468);
          goto joined_r0x031f5ba0;
        }
      }
      else if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x460) != 0)) {
        lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x460) + 0x18);
joined_r0x031f5ba0:
        if (lVar14 != 0) {
          uVar20 = *(uint *)(lVar14 + 8);
          uVar19 = *(uint *)(lVar14 + 0xc);
          cVar5 = *(char *)(lVar14 + 0x18);
          goto LAB_031f5bc8;
        }
      }
      uVar19 = 0;
      uVar20 = 0;
      bVar7 = true;
    }
    if ((((DAT_05293a70 == 0) || (DAT_05292338 == 0)) ||
        (uVar9 = FUN_017f1174(DAT_05292338 + 0xda0), ((uVar9 ^ 0xffffffff) & 0xffff) == 0)) ||
       ((iVar10 = FUN_017c1d70(DAT_05293a70,uVar9,0), iVar10 == 0 ||
        (uVar12 = FUN_0180dd50(), (uVar12 & 1) != 0)))) {
      FUN_031fc7fc(param_1,0);
LAB_031f5c3c:
      local_58 = *(long *)(param_1 + 0x218);
      uVar20 = uVar19 + 2;
      if ((int)uVar19 < 0) {
        puVar11 = (undefined8 *)(local_58 + 0x570) + uVar20;
        if (uVar19 < 0xfffffffe) {
          puVar11 = (undefined8 *)(local_58 + 0x570);
        }
        goto LAB_031f5c84;
      }
      if (uVar20 < 9) {
        puVar11 = (undefined8 *)(local_58 + (ulong)uVar19 * 8 + 0x580);
        goto LAB_031f5c84;
      }
      if (uVar20 < 0x21) {
        uVar19 = uVar19 - 7;
        goto LAB_031f5c7c;
      }
LAB_031f5fa8:
      plVar17 = (long *)0x0;
    }
    else {
      FUN_031fc7fc(param_1,bVar7);
      if (bVar7 == false) goto LAB_031f5c3c;
      local_58 = *(long *)(param_1 + 0x218);
      if ((int)uVar20 < 2) {
        puVar11 = (undefined8 *)(local_58 + 0x570) + uVar20;
        if (1 < uVar20) {
          puVar11 = (undefined8 *)(local_58 + 0x570);
        }
      }
      else {
        if (uVar20 < 9) {
          puVar11 = (undefined8 *)(local_58 + (ulong)(uVar20 - 2) * 8 + 0x580);
          goto LAB_031f5c84;
        }
        if (0x20 < uVar20) goto LAB_031f5fa8;
        uVar19 = uVar20 - 9;
LAB_031f5c7c:
        puVar11 = (undefined8 *)(local_58 + (ulong)uVar19 * 8 + 0x5b8);
      }
LAB_031f5c84:
      plVar17 = (long *)*puVar11;
    }
    *(long **)(param_1 + 0x3c8) = plVar17;
    local_50 = plVar18;
    if (plVar17 != (long *)0x0) {
      local_50 = plVar17;
    }
    if (*(char *)(param_1 + 0x1c5ac) == '\0') {
LAB_031f5f30:
      local_48 = 0;
      uVar12 = (**(code **)(*local_50 + 0xf0))();
      if ((uVar12 & 1) != 0) {
        return;
      }
      if (DAT_05739190 != 0) {
        *(byte *)(DAT_05739190 + 0x429) = *(byte *)(DAT_05739190 + 0x429) | 2;
      }
      FUN_032017e0(&local_58);
      return;
    }
    break;
  case 0x8e:
    uVar12 = (ulong)(short)DAT_04c487d4;
    if (uVar12 == 0xffffffffffffffff) {
LAB_031f5ce8:
      lVar14 = FUN_033d0598(&DAT_0548e140);
      piVar15 = (int *)(lVar14 + 0x858);
LAB_031f5cf8:
      if (*piVar15 == 0) goto LAB_031f5d08;
      lVar14 = 3;
    }
    else {
      puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar16 = (uint *)PTR_DAT_04bc39f8;
      }
      puVar1 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      local_58 = CONCAT44(local_58._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*puVar16 >> 0x19 & 1) == 0) {
        if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) {
          if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_031f5ce8;
          if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x470) != 0)) {
            lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x470) + 8);
            goto joined_r0x031f5cdc;
          }
        }
        else if ((DAT_05739190 != 0) && (*(long **)(DAT_05739190 + 0x468) != (long *)0x0)) {
          lVar14 = **(long **)(DAT_05739190 + 0x468);
          goto joined_r0x031f5cdc;
        }
      }
      else if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x460) != 0)) {
        lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x460) + 0x18);
joined_r0x031f5cdc:
        if (lVar14 != 0) {
          piVar15 = (int *)(lVar14 + 0x10);
          goto LAB_031f5cf8;
        }
      }
LAB_031f5d08:
      lVar14 = 2;
    }
    local_58 = *(long *)(param_1 + 0x218);
    local_50 = *(long **)(local_58 + lVar14 * 8 + 0x678);
    *(long **)(param_1 + 0x3d0) = local_50;
    if (*(char *)(param_1 + 0x1c5ac) == '\0') {
      if (local_50 == (long *)0x0) {
        local_50 = *(long **)(local_58 + 0x688);
      }
      goto LAB_031f5f30;
    }
    if (local_50 == (long *)0x0) {
      local_50 = *(long **)(local_58 + 0x688);
    }
    break;
  case 0x8f:
    uVar12 = (ulong)(short)DAT_04c487d4;
    if (uVar12 == 0xffffffffffffffff) {
LAB_031f5d80:
      lVar14 = FUN_033d0598(&DAT_0548e140);
      puVar16 = (uint *)(lVar14 + 0x85c);
LAB_031f5d90:
      uVar19 = *puVar16;
      uVar20 = uVar19 + 9;
      local_58 = *(long *)(param_1 + 0x218);
      if ((int)uVar19 < -7) {
        local_50 = (long *)(local_58 + 0x570) + uVar20;
        if (1 < uVar20) {
          local_50 = (long *)(local_58 + 0x570);
        }
        goto LAB_031f5de0;
      }
      if (0xfffffff6 < uVar19) {
        local_50 = (long *)(local_58 + (ulong)(uVar19 + 7) * 8 + 0x580);
        goto LAB_031f5de0;
      }
      if (uVar20 < 0x21) goto LAB_031f5dc0;
      local_50 = (long *)0x0;
    }
    else {
      puVar16 = &DAT_055c11c8 + (uVar12 & 0xffffffff) * 2;
      if (0xff < DAT_04c487d4) {
        puVar16 = &DAT_055c11c8;
      }
      puVar2 = &DAT_055c11c8 + (uVar12 & 0xffffffff) * 2;
      if (0xff < DAT_04c487d4) {
        puVar2 = &DAT_055c11c8;
      }
      local_58 = CONCAT44(local_58._4_4_,0x20);
      puVar4 = &DAT_055c11c8 + (uVar12 & 0xffffffff) * 2;
      if (0xff < DAT_04c487d4) {
        puVar4 = &DAT_055c11c8;
      }
      if ((*puVar16 >> 0x19 & 1) == 0) {
        if (((uint)puVar2[1] >> 2 & 1) == 0) {
          if ((puVar4[1] & 1) == 0) goto LAB_031f5d80;
          if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x470) != 0)) {
            lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x470) + 8);
            goto joined_r0x031f5d74;
          }
        }
        else if ((DAT_05739190 != 0) && (*(long **)(DAT_05739190 + 0x468) != (long *)0x0)) {
          lVar14 = **(long **)(DAT_05739190 + 0x468);
          goto joined_r0x031f5d74;
        }
      }
      else if ((DAT_05739190 != 0) && (*(long *)(DAT_05739190 + 0x460) != 0)) {
        lVar14 = *(long *)(*(long *)(DAT_05739190 + 0x460) + 0x18);
joined_r0x031f5d74:
        if (lVar14 != 0) {
          puVar16 = (uint *)(lVar14 + 0x14);
          goto LAB_031f5d90;
        }
      }
      local_58 = *(long *)(param_1 + 0x218);
      uVar19 = 0;
LAB_031f5dc0:
      local_50 = (long *)(local_58 + (ulong)uVar19 * 8 + 0x5b8);
LAB_031f5de0:
      local_50 = (long *)*local_50;
    }
    *(long **)(param_1 + 0x3d8) = local_50;
    if (*(char *)(param_1 + 0x1c5ac) == '\0') {
      if (local_50 == (long *)0x0) {
        local_50 = *(long **)(local_58 + 0x5b8);
      }
      goto LAB_031f5f30;
    }
    if (local_50 == (long *)0x0) {
      local_50 = *(long **)(local_58 + 0x5b8);
    }
    break;
  default:
    goto switchD_031f5538_default;
  }
  local_48 = 0;
  FUN_032017e0(&local_58);
  *(undefined1 *)(param_1 + 0x1c5ac) = 0;
switchD_031f5538_default:
  return;
}

