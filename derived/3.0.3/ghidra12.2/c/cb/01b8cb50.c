
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff7f0 : 0x01b8cfe0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b8cb50(long *param_1,uint *param_2,long *param_3,long *param_4,byte *param_5,long param_6
                 ,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *__s;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  char cVar20;
  int *piVar21;
  ushort uVar22;
  uint *puVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  undefined *local_810;
  undefined *local_808;
  undefined8 local_800;
  undefined1 *local_7f8;
  undefined4 local_7f0;
  undefined1 local_7ec [7];
  undefined1 local_7e5;
  undefined8 local_7c8;
  undefined **local_7c0;
  undefined4 local_7b8;
  undefined4 local_74;
  uint local_70 [4];
  
  __s = (void *)(**(code **)(*param_1 + 0x18))();
  memset(__s,0,0x754);
  *param_2 = 0;
  lVar17 = *(long *)PTR_DAT_04bb4788;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar25 = param_3[1];
  (**(code **)(*param_4 + 0x18))(param_4);
  FUN_0074fda4(&local_7c8,"%s-%s",lVar25,param_4[1]);
  (**(code **)((long)local_7c8 + 0x18))(&local_7c8);
  uVar7 = FUN_006bd550(local_7c0,0);
  local_800 = (undefined **)CONCAT44(local_800._4_4_,uVar7);
  puVar11 = (uint *)FUN_01b94210(lVar17 + 0xa40,&local_800);
  if (puVar11 == (uint *)0x0) {
    bVar6 = FUN_020fd7d8(param_5);
    if (bVar6 < 8) {
      puVar18 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar6 * 8 + 0x20);
    }
    else {
      puVar18 = &DAT_0407ebb1;
    }
    FUN_006d8678(&local_800,&DAT_040a677f,puVar18);
    ppuVar4 = local_7c0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_810 = PTR_DAT_04bb2020 + 0x10;
    local_808 = &DAT_040c54ec;
    (**(code **)((long)local_7c8 + 0x18))(&local_7c8);
    ppuVar5 = local_7c0;
    (**(code **)((long)local_7c8 + 0x18))(&local_7c8);
    lVar25 = 0;
    do {
      if (*(char *)((long)local_7c0 + lVar25) == '\0') goto LAB_01b8ccfc;
      if (*(char *)((long)local_7c0 + lVar25 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_01b8ccfc;
      }
      if (*(char *)((long)local_7c0 + lVar25 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_01b8ccfc;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_01b8ccfc:
    FUN_038d0770(ppuVar4,0,local_7b8,ppuVar5,lVar25,&local_800,&local_810,local_70);
    (**(code **)((long)local_7c8 + 0x18))(&local_7c8);
    uVar7 = FUN_006bd550(local_7c0,0);
    local_810 = (undefined *)CONCAT44(local_810._4_4_,uVar7);
    puVar11 = (uint *)FUN_01b94210(lVar17 + 0xa40,&local_810);
    if (puVar11 == (uint *)0x0) {
      return;
    }
  }
  puVar1 = PTR_DAT_04bc0698;
  puVar3 = PTR_DAT_04bc0690;
  local_808 = (undefined *)((ulong)local_808 & 0xffffffffffff0000);
  local_810 = (undefined *)0x0;
  if (*puVar11 == 0) {
LAB_01b8ce50:
    uVar9 = 0;
  }
  else {
    cVar20 = *PTR_DAT_04bc0690;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar1 + 4);
        if (-1 < (int)uVar9) {
          if (((uint *)((ulong)uVar9 + (long)puVar11) == (uint *)0x0) ||
             (uVar9 = *(uint *)((ulong)uVar9 + (long)puVar11), 2 < uVar9)) goto LAB_01b8ce50;
          goto LAB_01b8ce54;
        }
        if (uVar9 != 0xffffffff) goto LAB_01b8ce50;
      }
      puVar15 = (uint *)(ulong)*puVar11;
      uVar9 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_01b8ce54;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar15);
      if (lVar17 == 0) goto LAB_01b8ce50;
      uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
      *(undefined4 *)(puVar1 + 4) = 0xfffffffe;
      uVar9 = 0;
      if (uVar12 == 0) goto LAB_01b8ce54;
      piVar21 = (int *)(lVar17 + 4);
      while (piVar21[-1] != 0x128a3d9b) {
        piVar21 = piVar21 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar9 = 0;
          goto LAB_01b8ce54;
        }
      }
      iVar16 = 0;
      if (*piVar21 != -1) {
        iVar16 = *piVar21;
      }
      *(int *)(puVar1 + 4) = iVar16;
    } while (*puVar11 != 0);
    uVar9 = 0;
  }
LAB_01b8ce54:
  FUN_01b0d390(&local_810,uVar9);
  uVar9 = *puVar11;
  if (uVar9 != 0) {
    cVar20 = *puVar3;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
        uVar9 = *puVar11;
      }
      else {
        uVar26 = *(uint *)puVar1;
        if (-1 < (int)uVar26) {
          if (((uint *)((ulong)uVar26 + (long)puVar11) != (uint *)0x0) &&
             (local_7c8._0_4_ = *(uint *)((ulong)uVar26 + (long)puVar11), (uint)local_7c8 < 0x4f))
          goto LAB_01b8cf44;
          break;
        }
        if (uVar26 != 0xffffffff) break;
      }
      puVar15 = (uint *)(ulong)uVar9;
      local_7c8._0_4_ = 0;
      if ((puVar15 == (uint *)0x0) || (local_7c8._0_4_ = 0, puVar11 == puVar15)) goto LAB_01b8cf44;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar15);
      local_7c8._0_4_ = 0;
      if (lVar17 == 0) goto LAB_01b8cf44;
      uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
      *(undefined4 *)puVar1 = 0xfffffffe;
      if (uVar12 == 0) break;
      piVar21 = (int *)(lVar17 + 4);
      while (piVar21[-1] != 0x368210c4) {
        piVar21 = piVar21 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01b8cf40;
      }
      iVar16 = 0;
      if (*piVar21 != -1) {
        iVar16 = *piVar21;
      }
      *(int *)puVar1 = iVar16;
      uVar9 = *puVar11;
      if (uVar9 == 0) break;
    } while( true );
  }
LAB_01b8cf40:
  local_7c8._0_4_ = 0;
LAB_01b8cf44:
  local_800._0_4_ = (uint)local_7c8;
  if ((uint)local_7c8 < 0x4f) {
    uVar9 = (uint)local_7c8 + 7;
    if (-1 < (int)(uint)local_7c8) {
      uVar9 = (uint)local_7c8;
    }
    uVar9 = (int)uVar9 >> 3;
    if (uVar9 < 10) {
      local_7ec[(ulong)uVar9 - 0x24] =
           local_7ec[(ulong)uVar9 - 0x24] | (byte)(1 << (ulong)((uint)local_7c8 & 7));
    }
  }
  local_800 = (undefined **)((ulong)local_800._4_4_ << 0x20);
  local_7c8 = (undefined **)((ulong)local_7c8._4_4_ << 0x20);
  local_810 = (undefined *)((ulong)local_810 & 0xfffffffffffffffe);
  local_7c0 = &local_810;
  local_7c8 = &PTR_FUN_04a395f0;
  FUN_008a1ba0(param_1,&local_7c8);
  if (*puVar11 == 0) {
LAB_01b8d0e4:
    uVar9 = 0;
  }
  else {
    cVar20 = *puVar3;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar1 + 0xc);
        if (-1 < (int)uVar9) {
          if (((ushort *)((ulong)uVar9 + (long)puVar11) == (ushort *)0x0) ||
             (uVar22 = *(ushort *)((ulong)uVar9 + (long)puVar11), uVar9 = (uint)uVar22,
             0x12 < uVar22)) goto LAB_01b8d0e4;
          goto LAB_01b8d0e8;
        }
        if (uVar9 != 0xffffffff) goto LAB_01b8d0e4;
      }
      puVar15 = (uint *)(ulong)*puVar11;
      uVar9 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_01b8d0e8;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar15);
      if (lVar17 == 0) goto LAB_01b8d0e4;
      uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
      *(undefined4 *)(puVar1 + 0xc) = 0xfffffffe;
      uVar9 = 0;
      if (uVar12 == 0) goto LAB_01b8d0e8;
      piVar21 = (int *)(lVar17 + 4);
      while (piVar21[-1] != -0x1f9f2c33) {
        piVar21 = piVar21 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar9 = 0;
          goto LAB_01b8d0e8;
        }
      }
      iVar16 = 0;
      if (*piVar21 != -1) {
        iVar16 = *piVar21;
      }
      *(int *)(puVar1 + 0xc) = iVar16;
    } while (*puVar11 != 0);
    uVar9 = 0;
  }
LAB_01b8d0e8:
  local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,uVar9);
  if (uVar9 - 1 < 0x12) {
    (*(code *)(&PTR_LAB_04a39630)[(int)(uVar9 - 1)])(param_1,param_6,param_7,param_5);
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_7c8 = &PTR_FUN_049ff948;
  uVar9 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(&local_800,param_1,uVar9);
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar26 = 1 << (ulong)(uVar9 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar9 >> 5) * 4) & uVar26) != 0) {
      lVar17 = *(long *)puVar3;
      uVar8 = FUN_0277d6c4(&local_800);
      if (*(long *)puVar3 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_7c8)(&local_7c8,&local_800), (uVar12 & 1) != 0))
        goto LAB_01b8d170;
      }
      lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar25 = (ulong)(uVar9 >> 5) * 4;
      *(uint *)(lVar17 + lVar25) = *(uint *)(lVar17 + lVar25) & (uVar26 ^ 0xffffffff);
    }
LAB_01b8d170:
    uVar9 = uVar9 + 1;
  } while (uVar9 != 15000);
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 != 0) {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar17 == 0) goto LAB_01b8d83c;
      lVar17 = lVar17 + 0x70;
    }
    else if (((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0)) ||
            (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 == 0))
    goto LAB_01b8d83c;
    if ((*(long **)(lVar17 + 0xd0) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar17 + 0xd0), puVar18 == (undefined8 *)0x0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)*puVar18)();
      uVar12 = uVar12 & 0xffffffff;
    }
    uVar9 = FUN_027dc31c(*(long *)(lVar17 + 0xb8) + *(long *)(lVar17 + 0xb0),param_5);
    if (uVar9 != 0xffffffff) {
      lVar25 = *(long *)(lVar17 + 0xb8) + *(long *)(lVar17 + 0xb0);
      local_74 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
      bVar6 = FUN_020fd7d8(param_5);
      uVar26 = 0;
      local_7c8 = &PTR_FUN_04a39578;
      do {
        (**(code **)(*param_1 + 0x10))(&local_800,param_1,uVar26);
        lVar13 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar8 = 1 << (ulong)(uVar26 & 0x1f);
        if ((*(uint *)(lVar13 + (ulong)(uVar26 >> 5) * 4) & uVar8) != 0) {
          lVar13 = *(long *)puVar3;
          uVar10 = FUN_0277d6c4(&local_800);
          if (*(long *)puVar3 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
               (uVar14 = (*(code *)*local_7c8)(&local_7c8,&local_800), (uVar14 & 1) != 0))
            goto LAB_01b8d330;
          }
          lVar13 = (**(code **)(*param_1 + 0x18))(param_1);
          lVar19 = (ulong)(uVar26 >> 5) * 4;
          *(uint *)(lVar13 + lVar19) = *(uint *)(lVar13 + lVar19) & (uVar8 ^ 0xffffffff);
        }
LAB_01b8d330:
        uVar26 = uVar26 + 1;
      } while (uVar26 != 15000);
      lVar13 = lVar25 + (ulong)uVar9 * 0x13230;
      if (9 < uVar9) {
        lVar13 = lVar25;
      }
      FUN_00b92ba0(param_1,bVar6 < 4,*(int *)(param_6 + 0x34) != 1);
      nn::os::GetSystemTick();
      memcpy(&local_7c8,param_1 + 1,0x754);
      FUN_026b5830(lVar13,param_1,uVar9,0);
      local_7e5 = 0;
      local_7f0 = 8;
      local_7f8 = local_7ec;
      local_7ec[0] = 0;
      local_800 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      FUN_038d1270(&local_800,"-----");
      if ((ulong)*param_5 < 0x23) {
        FUN_038d1270(&local_800,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_5 * 8 + 0xb0),param_5[1]);
      }
      param_6 = param_6 + 0x1c;
      uVar24 = *(undefined8 *)PTR_DAT_04bb4138;
      (**(code **)((long)local_800 + 0x18))(&local_800);
      local_70[0] = FUN_006bd550(local_7f8,0);
      puVar15 = (uint *)FUN_0079e770(uVar24,local_70);
      puVar2 = PTR_DAT_04bb40b8;
      puVar1 = PTR_DAT_04bb40b0;
      if (puVar15 != (uint *)0x0) {
        if (*puVar15 != 0) {
          cVar20 = *PTR_DAT_04bb40b0;
          do {
            if (cVar20 == '\0') {
              cVar20 = '\x01';
              *puVar1 = 1;
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar9 = *(uint *)(puVar2 + 0x50);
              if (-1 < (int)uVar9) {
                if ((ushort *)((ulong)uVar9 + (long)puVar15) != (ushort *)0x0) {
                  uVar22 = *(ushort *)((ulong)uVar9 + (long)puVar15);
                  goto LAB_01b8d5fc;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
            }
            puVar23 = (uint *)(ulong)*puVar15;
            uVar22 = 0xfffe;
            if ((*puVar15 == 0) || (puVar15 == puVar23)) goto LAB_01b8d5fc;
            lVar25 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar23)) != '\0') {
              lVar25 = 0x1c;
            }
            lVar25 = (long)puVar15 + (lVar25 - (long)puVar23);
            if (lVar25 == 0) break;
            uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar23));
            *(undefined4 *)(puVar2 + 0x50) = 0xfffffffe;
            if (uVar14 == 0) break;
            piVar21 = (int *)(lVar25 + 4);
            while (piVar21[-1] != -0x78f0e1d7) {
              piVar21 = piVar21 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_01b8d5f8;
            }
            iVar16 = 0;
            if (*piVar21 != -1) {
              iVar16 = *piVar21;
            }
            *(int *)(puVar2 + 0x50) = iVar16;
            if (*puVar15 == 0) break;
          } while( true );
        }
LAB_01b8d5f8:
        uVar22 = 0xfffe;
LAB_01b8d5fc:
        local_70[0] = (uint)uVar22;
        local_70[1] = 0;
        FUN_0277d4ac(local_70);
        lVar25 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar9 = FUN_0277d6c4(local_70);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar19 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar25 + lVar19) =
               *(uint *)(lVar25 + lVar19) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
        }
      }
      uVar9 = 0;
      local_800 = &PTR_FUN_04a395a0;
      do {
        (**(code **)(*param_1 + 0x10))(local_70,param_1,uVar9);
        lVar25 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar26 = 1 << (ulong)(uVar9 & 0x1f);
        if ((*(uint *)(lVar25 + (ulong)(uVar9 >> 5) * 4) & uVar26) != 0) {
          lVar25 = *(long *)puVar3;
          uVar8 = FUN_0277d6c4(local_70);
          if (*(long *)puVar3 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if (((uVar8 < *(uint *)(lVar25 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
               (uVar14 = (*(code *)*local_800)(&local_800,local_70), (uVar14 & 1) != 0))
            goto LAB_01b8d6a0;
          }
          lVar25 = (**(code **)(*param_1 + 0x18))(param_1);
          lVar19 = (ulong)(uVar9 >> 5) * 4;
          *(uint *)(lVar25 + lVar19) = *(uint *)(lVar25 + lVar19) & (uVar26 ^ 0xffffffff);
        }
LAB_01b8d6a0:
        uVar9 = uVar9 + 1;
      } while (uVar9 != 15000);
      FUN_00b92a60(param_1,&local_74);
      FUN_026b5560(lVar13,param_1,0);
      FUN_026b6010(lVar13,param_1,param_6,0);
      FUN_026b64b0(lVar13,param_1,param_6,0);
      FUN_026b69b0(lVar13,param_1,param_6);
      lVar13 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar25 = 0;
      iVar16 = 0;
      do {
        puVar15 = (uint *)(lVar13 + lVar25);
        lVar25 = lVar25 + 4;
        uVar9 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        iVar16 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar16;
      } while (lVar25 != 0x754);
      if (iVar16 == 0) {
        memcpy(param_1 + 1,&local_7c8,0x754);
      }
    }
    if ((((uVar12 & 1) != 0) && (*(long *)(lVar17 + 0xd0) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0xd0) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
  }
LAB_01b8d83c:
  puVar1 = PTR_DAT_04bc0698;
  puVar3 = PTR_DAT_04bc0690;
  if (*puVar11 == 0) {
LAB_01b8d920:
    uVar9 = 0;
  }
  else {
    cVar20 = *PTR_DAT_04bc0690;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar1 + 0x10);
        if (-1 < (int)uVar9) {
          if (((byte *)((ulong)uVar9 + (long)puVar11) == (byte *)0x0) ||
             (bVar6 = *(byte *)((ulong)uVar9 + (long)puVar11), uVar9 = (uint)bVar6, 1 < bVar6))
          goto LAB_01b8d920;
          goto LAB_01b8d924;
        }
        if (uVar9 != 0xffffffff) goto LAB_01b8d920;
      }
      puVar15 = (uint *)(ulong)*puVar11;
      uVar9 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_01b8d924;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar15);
      if (lVar17 == 0) goto LAB_01b8d920;
      uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
      *(undefined4 *)(puVar1 + 0x10) = 0xfffffffe;
      uVar9 = 0;
      if (uVar12 == 0) goto LAB_01b8d924;
      piVar21 = (int *)(lVar17 + 4);
      while (piVar21[-1] != -0x3dcc8d85) {
        piVar21 = piVar21 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar9 = 0;
          goto LAB_01b8d924;
        }
      }
      iVar16 = 0;
      if (*piVar21 != -1) {
        iVar16 = *piVar21;
      }
      *(int *)(puVar1 + 0x10) = iVar16;
    } while (*puVar11 != 0);
    uVar9 = 0;
  }
LAB_01b8d924:
  *param_2 = uVar9;
  return;
}

