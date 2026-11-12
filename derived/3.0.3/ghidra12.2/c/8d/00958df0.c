
undefined8 FUN_00958df0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *local_198;
  undefined *local_190;
  int local_188;
  undefined local_184 [255];
  undefined1 local_85;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70 [2];
  
  local_85 = 0;
  local_188 = 0x100;
  local_184[0] = 0;
  local_198 = PTR_DAT_04bb21f8 + 0x10;
  local_190 = local_184;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar12 = (undefined *)param_2[1];
  if (local_184 != puVar12) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = 0;
    do {
      if (*(char *)(param_2[1] + lVar10) == '\0') goto LAB_00958ebc;
      lVar1 = param_2[1] + lVar10;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_00958ebc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_00958ebc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_00958ebc:
    iVar6 = (int)lVar10;
    if (local_188 <= (int)lVar10) {
      iVar6 = local_188 + -1;
    }
    memcpy(local_184,puVar12,(long)iVar6);
    local_184[iVar6] = 0;
  }
  puVar12 = local_190;
  (**(code **)(local_198 + 0x18))(&local_198);
  lVar10 = 0;
  do {
    if (local_190[lVar10] == '\0') goto LAB_00958f3c;
    if (local_190[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_00958f3c;
    }
    if (local_190[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_00958f3c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_00958f3c:
  uVar2 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_188 - uVar2) < 5) {
    uVar3 = local_188 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(puVar12 + uVar2,&DAT_040b50da,(ulong)uVar3);
    puVar12[(ulong)uVar3 + (ulong)uVar2] = 0;
  }
  lVar10 = 0;
  puVar12 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((*(byte *)(param_1 + 0x548 + lVar10 * 0x50 + 0x18) >> 1 & 1) != 0) {
      lVar1 = param_1 + 0x548 + lVar10 * 0x50 + 0x10;
      uVar7 = FUN_03f2d924(lVar1);
      if ((uVar7 & 1) != 0) {
        local_78 = (&PTR_s_RoomTentA00_pbc_0492a170)[lVar10];
        local_80 = puVar12;
        (**(code **)(local_198 + 0x18))(&local_198);
        (**(code **)(local_198 + 0x18))(&local_198);
        puVar4 = local_190;
        (**(code **)(local_80 + 0x18))(&local_80);
        if (puVar4 == local_78) {
LAB_0095909c:
          FUN_03f2d924(lVar1);
          puVar8 = (undefined8 *)FUN_03f2d7f0(lVar1);
          if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4be8);
          }
          (**(code **)*puVar8)(puVar8,PTR_DAT_04bb4be0);
          local_70[0] = 0;
          plVar11 = *(long **)puVar8[6];
          (**(code **)(*param_3 + 0x18))(param_3);
          local_78 = (undefined *)param_3[1];
          local_80 = PTR_DAT_04bb2020 + 0x10;
          if (((*PTR_DAT_04bb2868 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb2868);
          }
          uVar7 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb2860);
          if ((uVar7 & 1) == 0) {
            plVar11 = (long *)0x0;
          }
          uVar9 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_80,local_70);
          return uVar9;
        }
        uVar7 = 0;
        bVar5 = true;
        do {
          if (local_190[uVar7] != local_78[uVar7]) break;
          if (local_190[uVar7] == '\0') {
            if (bVar5) goto LAB_0095909c;
            break;
          }
          if (local_190[uVar7 + 1] != local_78[uVar7 + 1]) break;
          if (local_190[uVar7 + 1] == '\0') goto LAB_0095909c;
          if (local_190[uVar7 + 2] != local_78[uVar7 + 2]) break;
          if (local_190[uVar7 + 2] == '\0') goto LAB_0095909c;
          bVar5 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x1a) {
      return 0;
    }
  } while( true );
}

