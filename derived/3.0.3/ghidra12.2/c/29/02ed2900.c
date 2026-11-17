
/* WARNING: Removing unreachable block (ram,0x02ed2964) */
/* WARNING: Removing unreachable block (ram,0x02ed2d34) */

void FUN_02ed2900(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  int local_b8;
  undefined local_b4 [63];
  undefined1 local_75;
  byte local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined8 local_64;
  int local_54;
  
  puVar3 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  if ((*(char *)(param_1 + 0x234) != '\0' && *(int *)(param_1 + 0x1b0) != 3) &&
     ((*(ushort *)(param_1 + 0x228) >> 3 & 1) != 0)) {
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,3);
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    puVar2 = PTR_DAT_04bc7278;
    if ((puVar9 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
      FUN_03459d70();
      local_d8 = (undefined1 *)0xffffffffffffffff;
      uStack_d0 = 0xffffffffffffffff;
      local_b8 = 0x40;
      local_75 = 0;
      local_b4[0] = 0;
      *(byte *)((long)puVar9 + 0x239) = *(byte *)((long)puVar9 + 0x239) | 4;
      local_c0 = local_b4;
      local_64 = 0xffffffffffffffff;
      local_c8 = PTR_DAT_04bb2bc0 + 0x10;
      local_6c = 0;
      local_68 = 0;
      local_70 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_70) {
        local_70 = 0xff;
      }
      local_54 = FUN_033fc390(param_1 + 0x1f8);
      if (local_54 != 1) {
        local_d8 = (undefined1 *)0xffffffff0000000f;
        puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
        if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
        if ((uVar6 & 1) == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        plVar11 = (long *)puVar10[0x36];
        uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = (**(code **)(*plVar11 + 0x68))(plVar11), (uVar6 & 1) == 0)) {
          puVar7 = &DAT_040db8aa;
        }
        else {
          puVar7 = &DAT_040c18e7;
        }
        puVar4 = local_c0;
        if (local_c0 != puVar7) {
          lVar8 = 0;
          do {
            if (puVar7[lVar8] == '\0') goto LAB_02ed2aec;
            if (puVar7[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_02ed2aec;
            }
            if (puVar7[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_02ed2aec;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_02ed2aec:
          iVar5 = (int)lVar8;
          if (local_b8 <= (int)lVar8) {
            iVar5 = local_b8 + -1;
          }
          memcpy(local_c0,puVar7,(long)iVar5);
          puVar4[iVar5] = 0;
        }
        FUN_02ee2b00(puVar9,&local_d8,1);
        puVar7 = local_c0;
        local_d8 = (undefined1 *)0x3ffffffff;
        if (local_c0 != &DAT_040831cf) {
          iVar5 = 4;
          if (local_b8 < 5) {
            iVar5 = local_b8 + -1;
          }
          memcpy(local_c0,&DAT_040831cf,(long)iVar5);
          puVar7[iVar5] = 0;
        }
        FUN_02ee2b00(puVar9,&local_d8,1);
      }
      puVar7 = &DAT_040eb20f;
      local_d8 = (undefined1 *)0xffffffff00000005;
      if (*(long *)PTR_DAT_04bbbc38 != 0) {
        iVar5 = FUN_014e4978();
        puVar7 = &DAT_040e0b9f;
        if (iVar5 != 1) {
          puVar7 = &DAT_040eb20f;
        }
      }
      puVar4 = local_c0;
      if (local_c0 != puVar7) {
        lVar8 = 0;
        do {
          if (puVar7[lVar8] == '\0') goto LAB_02ed2c0c;
          if (puVar7[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02ed2c0c;
          }
          if (puVar7[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02ed2c0c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02ed2c0c:
        iVar5 = (int)lVar8;
        if (local_b8 <= (int)lVar8) {
          iVar5 = local_b8 + -1;
        }
        memcpy(local_c0,puVar7,(long)iVar5);
        puVar4[iVar5] = 0;
      }
      FUN_02ee2b00(puVar9,&local_d8,1);
      puVar7 = local_c0;
      iVar5 = *(int *)(param_1 + 0x224);
      if (iVar5 == 0) {
        local_d8 = &DAT_ffffffff00000006;
        if (local_c0 != &DAT_040bc7f1) {
          iVar5 = 4;
          if (local_b8 < 5) {
            iVar5 = local_b8 + -1;
          }
          memcpy(local_c0,&DAT_040bc7f1,(long)iVar5);
          puVar7[iVar5] = 0;
        }
        FUN_02ee2b00(puVar9,&local_d8,1);
        iVar5 = *(int *)(param_1 + 0x224);
      }
      puVar7 = local_c0;
      if (iVar5 == 7) {
        local_d8 = (undefined1 *)0xffffffff0000000d;
        if (local_c0 != &DAT_040cb995) {
          iVar5 = 4;
          if (local_b8 < 5) {
            iVar5 = local_b8 + -1;
          }
          memcpy(local_c0,&DAT_040cb995,(long)iVar5);
          puVar7[iVar5] = 0;
        }
        FUN_02ee2b00(puVar9,&local_d8,1);
      }
      local_54 = 3;
      puVar9 = *(undefined8 **)(*(long *)puVar1 + 0x58);
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc7280);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
        *(byte *)((long)puVar9 + 0x239) = *(byte *)((long)puVar9 + 0x239) | 1;
      }
    }
  }
  return;
}

