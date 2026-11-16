
void FUN_029d0994(long param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 local_68;
  undefined4 local_60;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  
  bVar3 = *(byte *)(param_1 + 0x1f);
  bVar4 = *(byte *)(param_1 + 0x1c);
  if (bVar3 < bVar4) {
    uVar7 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 0xc) << 0xb;
    uVar1 = *(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
    *(uint *)(param_1 + 0x14) = uVar1;
    *(uint *)(param_1 + 0x18) = uVar7;
    if ((uint)*(byte *)(param_1 + 0x1d) <= (uint)((ulong)uVar7 * 100 >> 0x20)) goto LAB_029d0b20;
  }
  if ((param_4 & 1) == 0) {
    uVar7 = 3;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 0xc) << 0xb;
    uVar2 = *(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(param_1 + 0x14) = uVar2;
    *(uint *)(param_1 + 0x18) = uVar1;
    uVar7 = 2;
    if ((uint)*(byte *)(param_1 + 0x1e) <= (uint)((ulong)uVar1 * 100 >> 0x20)) {
      uVar7 = 3;
    }
  }
  if (param_2 != 0) {
    if ((param_5 & 1) == 0) {
LAB_029d0a8c:
      puVar8 = (undefined8 *)(&PTR_DAT_04a98608)[uVar7];
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar7);
      if (uVar7 < 4) {
        uVar7 = uVar7 + 4;
        goto LAB_029d0a8c;
      }
      if (uVar7 < 8) goto LAB_029d0a8c;
      puVar8 = &DAT_0407ebb1;
    }
    local_68 = 0;
    local_60 = 0;
    lVar5 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
    if (((puVar8 != (undefined8 *)0x0) && (*(char *)(lVar5 + 0x78) != '\0')) &&
       (uVar6 = FUN_03bf46a8(param_2,"searchAndEmit(%s)",puVar8), (uVar6 & 1) != 0)) {
      local_48 = 0;
      local_58 = PTR_DAT_04bcadf8 + 0x10;
      local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),puVar8);
      if (local_50 != 0) {
        FUN_03bf47b0(param_2,&local_58,&local_68);
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x1f);
  bVar4 = *(byte *)(param_1 + 0x1c);
LAB_029d0b20:
  if (bVar3 < bVar4) {
    if (param_2 != 0) {
      uVar7 = param_3;
      if ((param_5 & 1) != 0) {
        local_58 = (undefined *)CONCAT44(local_58._4_4_,param_3);
        uVar7 = param_3 + 4;
        if (3 < param_3) {
          uVar7 = param_3;
        }
      }
      if (uVar7 < 8) {
        puVar8 = (undefined8 *)(&PTR_DAT_04a98608)[uVar7];
      }
      else {
        puVar8 = &DAT_0407ebb1;
      }
      local_68 = 0;
      local_60 = 0;
      lVar5 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
      if (((puVar8 != (undefined8 *)0x0) && (*(char *)(lVar5 + 0x78) != '\0')) &&
         (uVar6 = FUN_03bf46a8(param_2,"searchAndEmit(%s)",puVar8), (uVar6 & 1) != 0)) {
        local_48 = 0;
        local_58 = PTR_DAT_04bcadf8 + 0x10;
        local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),puVar8);
        if (local_50 != 0) {
          FUN_03bf47b0(param_2,&local_58,&local_68);
        }
      }
    }
    *(byte *)(param_1 + 0x1f) = bVar3 + 1;
  }
  return;
}

