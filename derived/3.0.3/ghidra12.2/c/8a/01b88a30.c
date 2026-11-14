
void FUN_01b88a30(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined **local_68;
  undefined8 *puStack_60;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb46b0;
  local_48 = 0;
  local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_2);
  }
  if ((int)local_68 - 1U < 3) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1 << (ulong)(local_48._4_4_ & 0x1f);
    local_48 = (ulong)uVar7;
  }
  local_48._4_4_ = 1;
  local_68._0_4_ = 1;
  if (*(long *)puVar1 != 0) {
    FUN_026eec4c(*(long *)puVar1,param_2);
  }
  if (2 < (int)local_68 - 1U) {
    uVar7 = 1 << (ulong)(local_48._4_4_ & 0x1f) | uVar7;
    local_48._0_4_ = uVar7;
  }
  local_48._4_4_ = 2;
  local_68._0_4_ = 2;
  if (*(long *)puVar1 != 0) {
    FUN_026eec4c(*(long *)puVar1,param_2);
  }
  if (2 < (int)local_68 - 1U) {
    uVar7 = 1 << (ulong)(local_48._4_4_ & 0x1f) | uVar7;
    local_48._0_4_ = uVar7;
  }
  local_48._4_4_ = 3;
  local_68 = (undefined **)CONCAT44(local_68._4_4_,3);
  if (*(long *)puVar1 != 0) {
    FUN_026eec4c(*(long *)puVar1,param_2);
  }
  lVar2 = DAT_05336138;
  if (2 < (int)local_68 - 1U) {
    local_48._0_4_ = 1 << (ulong)(local_48._4_4_ & 0x1f) | uVar7;
  }
  puStack_60 = &local_48;
  local_68 = &PTR_FUN_04a39488;
  uVar7 = 0;
  do {
    if ((int)*(uint *)(lVar2 + 0x1c0) < 1) {
      lVar4 = *(long *)(lVar2 + 0xb0);
      if (lVar4 == 0) {
        return;
      }
      uVar6 = 0;
      if (*(uint **)(lVar4 + 8) != (uint *)0x0) {
        uVar6 = **(uint **)(lVar4 + 8);
      }
      if (uVar6 <= uVar7) {
        return;
      }
      if ((((lVar4 != 0) && (puVar5 = *(uint **)(lVar4 + 8), puVar5 != (uint *)0x0)) &&
          ((*(uint *)(lVar2 + 200) <= uVar7 ||
           (*(char *)(*(long *)(lVar2 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar4 = (ulong)(puVar5[1] * uVar7 + (uint)(ushort)puVar5[2] * 8 + iVar8) + (long)puVar5;
        goto joined_r0x01b88c78;
      }
    }
    else {
      if (*(uint *)(lVar2 + 0x1c0) <= uVar7) {
        return;
      }
      uVar6 = uVar7;
      if (*(uint *)(lVar2 + 0x1b0) <= uVar7) {
        uVar6 = 0;
      }
      lVar4 = *(long *)(*(long *)(lVar2 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01b88c78:
      if (((lVar4 != 0) && (uVar3 = (*(code *)*local_68)(&local_68), (uVar3 & 1) != 0)) &&
         (uVar7 < 0x80)) {
        *(byte *)(param_1 + (ulong)(uVar7 >> 3)) =
             *(byte *)(param_1 + (ulong)(uVar7 >> 3)) | (byte)(1 << (ulong)(uVar7 & 7));
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

