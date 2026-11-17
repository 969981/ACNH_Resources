
void FUN_02ef6cf0(long param_1,byte *param_2,ulong param_3)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ushort *puVar14;
  long lVar15;
  undefined1 *__dest;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  byte local_24 [4];
  
  if ((param_3 & 1) != 0) {
    if (DAT_056b6f18 == 0) {
      return;
    }
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
                    /* WARNING: Could not recover jumptable at 0x02ef6d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_02ef6d4c + (ulong)DAT_04181001 * 4))();
    return;
  }
  uVar11 = FUN_03394720(param_2);
  puVar6 = PTR_DAT_04bb6298;
  pbVar4 = PTR_DAT_04bb32e0;
  if ((uVar11 & 1) == 0) {
    pbVar3 = (byte *)(DAT_056b6f18 + 0xef4);
    if (DAT_056b6f18 == 0) {
      uVar9 = 0xffffffff;
      pbVar3 = PTR_DAT_04bb32e0;
    }
    else {
      uVar9 = *(undefined4 *)(DAT_056b6f18 + 0xef8);
    }
    bVar19 = *pbVar3;
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar19);
    plVar13 = (long *)FUN_02ef3b00(uVar9,&local_68);
    if (((plVar13 == (long *)0x0) || ((int)plVar13[0x36] != 2)) ||
       (uVar11 = (**(code **)(*plVar13 + 0x210))(), (uVar11 & 1) == 0)) {
      if (DAT_056b6f18 != 0) {
        pbVar4 = (byte *)(DAT_056b6f18 + 0xef4);
      }
      local_24[0] = *pbVar4;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      lVar15 = FUN_02ef3c90(local_24);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x1b0) != 2)) {
        if (DAT_056b6f18 != 0) {
          local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
                    /* WARNING: Could not recover jumptable at 0x02ef7004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_02ef7008 + (ulong)DAT_0418100c * 4))();
          return;
        }
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(&DAT_054f0960);
            puVar17 = (uint *)&DAT_054f0958;
            if (iVar10 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar17 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
          if ((ulong)*param_2 < 8) {
            puVar17 = puVar17 + (ulong)*param_2 * 2;
          }
        }
        local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
        if ((*puVar17 >> 0x19 & 1) == 0) {
          return;
        }
      }
    }
    goto LAB_02ef72ac;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x17);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar17 >> 0x17 & 1) != 0) goto LAB_02ef72ac;
  }
  uVar11 = FUN_0180c600();
  if ((uVar11 & 1) != 0) goto LAB_02ef72ac;
  lVar15 = *(long *)PTR_DAT_04bb27f8;
  if (lVar15 != 0) {
    puVar14 = *(ushort **)PTR_DAT_04bc3a48;
    if ((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) {
      return;
    }
    if ((*(int *)(lVar15 + 0x14) == 4) || (*(int *)(lVar15 + 0x14) == 5)) {
      sVar5 = *(short *)puVar6;
      if (sVar5 != -1) {
        uVar11 = (ulong)local_68 >> 0x20;
        local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
        puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar17 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar17 & 1) != 0) {
          local_68 = (undefined *)CONCAT44((int)uVar11,0x1a);
          uVar11 = FUN_0290cbcc(&local_68);
          goto joined_r0x02ef70e0;
        }
      }
    }
    else {
      if ((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) {
        return;
      }
      uVar11 = FUN_0180c6f0();
      if (((((uVar11 & 1) != 0) || (uVar11 = FUN_0180c830(), (uVar11 & 1) != 0)) ||
          (uVar11 = FUN_0180c8d0(), (uVar11 & 1) != 0)) ||
         ((uVar11 = FUN_0180c970(), (uVar11 & 1) != 0 ||
          (uVar11 = FUN_0180ca10(), (uVar11 & 1) != 0)))) goto LAB_02ef72ac;
      uVar11 = FUN_0180c790();
joined_r0x02ef70e0:
      if ((uVar11 & 1) != 0) goto LAB_02ef72ac;
    }
  }
  puVar6 = PTR_DAT_04bb2720;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  iVar10 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar10 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      iVar10 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar10 = 0;
        if (*(long *)puVar6 != 0) {
          lVar15 = *(long *)(*(long *)puVar6 + 0x330);
          iVar10 = 0;
          if (lVar15 != 0) {
            iVar10 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  puVar7 = PTR_DAT_04bbe4b0;
  if (((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar10) && (*(long *)PTR_DAT_04bb4938 != 0)) &&
     (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0)) {
    lVar15 = *(long *)puVar6;
    iVar10 = 0;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x330) == 0) {
        iVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar8 = FUN_006bd550(*puVar12,0);
        iVar10 = 0;
        if (iVar8 == 0x758f7eaf) {
          iVar10 = 0;
          if (*(long *)puVar6 != 0) {
            lVar15 = *(long *)(*(long *)puVar6 + 0x330);
            iVar10 = 0;
            if (lVar15 != 0) {
              iVar10 = *(int *)(lVar15 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar7 + 0xcc) == iVar10) goto LAB_02ef72ac;
  }
  lVar15 = *(long *)puVar6;
  iVar10 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar10 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      iVar10 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar10 = 0;
        if (*(long *)puVar6 != 0) {
          lVar15 = *(long *)(*(long *)puVar6 + 0x330);
          iVar10 = 0;
          if (lVar15 != 0) {
            iVar10 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar7 + 0xd0) == iVar10) {
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar19 = *(byte *)(lVar15 + 0x473);
    if ((long)(char)bVar19 == 0xffffffffffffffff) goto LAB_02ef72ac;
    pbVar4 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x80;
    if (7 < bVar19) {
      pbVar4 = (byte *)(lVar15 + 0x48);
    }
    if (((*pbVar4 >> 3 & 1) == 0) || (*(byte *)(lVar15 + 0x472) == bVar19)) goto LAB_02ef72ac;
  }
  uVar11 = FUN_02915598(param_2);
  if ((uVar11 & 1) == 0) {
    return;
  }
  iVar10 = FUN_0266c940(param_2);
  if (iVar10 == 1) {
    return;
  }
LAB_02ef72ac:
  puVar6 = PTR_DAT_04bb5ce0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    lVar15 = 0;
  }
  else {
    FUN_017f8ad0(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
    lVar15 = *(long *)puVar6;
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_58 = 0;
  uStack_44 = 0;
  uStack_43 = 0;
  if (lVar15 == 0) {
    uStack_48 = 0x42200000;
    local_60 = &DAT_040a24bc;
    local_50 = 0x42200000;
  }
  else {
    if (*(uint *)(lVar15 + 0xee0) < 4) {
      local_60 = &DAT_04181290 + *(int *)(&DAT_04181290 + (long)(int)*(uint *)(lVar15 + 0xee0) * 4);
    }
    else {
      local_60 = &DAT_040a24bc;
    }
    local_50 = *(undefined4 *)(lVar15 + 0xd74);
    uStack_48 = *(undefined4 *)(lVar15 + 0xd7c);
  }
  local_4c = 0;
  uStack_4a = 0x4220;
  if (((*(byte *)(param_1 + 0x270) & 1) == 0) || (lVar15 = *(long *)(param_1 + 0x278), lVar15 == 0))
  {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar15 + 0x18);
    if ((*(byte *)(lVar15 + 8) & 10) != 2) {
      puVar12 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd3a0);
  }
  uVar11 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bbd398);
  if ((uVar11 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  iVar10 = *(int *)(puVar12 + 0x38);
  iVar8 = *(int *)(puVar12 + 0x37);
  if (iVar10 < iVar8) {
    *(int *)(puVar12 + 0x38) = iVar10 + 1;
    if (puVar12[0x36] != 0) {
      iVar10 = *(int *)((long)puVar12 + 0x1bc) + iVar10;
      iVar2 = 0;
      if (iVar8 <= iVar10) {
        iVar2 = iVar8;
      }
      puVar18 = (undefined1 *)(puVar12[0x36] + (long)(iVar10 - iVar2) * 0xb0);
      *puVar18 = uStack_43;
      puVar18[1] = uStack_44;
      *(undefined8 *)(puVar18 + 8) = local_58;
      *(undefined4 *)(puVar18 + 0x10) = local_50;
      *(uint *)(puVar18 + 0x14) = CONCAT22(uStack_4a,local_4c);
      *(undefined4 *)(puVar18 + 0x18) = uStack_48;
      (**(code **)(local_68 + 0x18))(&local_68);
      __dest = *(undefined1 **)(puVar18 + 0x20);
      if (__dest != local_60) {
        lVar15 = 0;
        do {
          pcVar1 = local_60 + lVar15;
          lVar15 = lVar15 + 1;
        } while (*pcVar1 != '\0');
        uVar16 = (int)lVar15 - 1;
        if (*(int *)(puVar18 + 0x2c) <= (int)uVar16) {
          uVar16 = *(int *)(puVar18 + 0x2c) - 1;
        }
        if ((int)uVar16 < 1) {
          uVar16 = 0;
        }
        else {
          memcpy(__dest,local_60,(ulong)uVar16);
          __dest = __dest + uVar16;
        }
        *__dest = 0;
        *(uint *)(puVar18 + 0x28) = uVar16;
      }
    }
  }
  return;
}

