
void FUN_013926f0(long param_1,long *param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 local_44 [4];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  if ((*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2) || (*(byte *)(lVar9 + 0x476) < 2)) {
    bVar3 = *(byte *)(lVar9 + 0x473);
    puVar8 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar8 = (undefined1 *)(lVar9 + 0x473);
      }
    }
    local_44[0] = *puVar8;
    uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar7 = (**(code **)(*param_2 + 0x30))(param_2);
    FUN_013922f4(uVar7,local_44,uVar6,uVar7 & 0xffffffff);
  }
  else {
    uVar2 = *param_3;
    uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar5 = (**(code **)(*param_2 + 0x30))(param_2);
    local_28 = 0;
    local_22 = 0;
    local_24 = 4;
    if (-1 < *(int *)(param_1 + 8)) {
      local_23 = uVar2;
      FUN_01db1df0(**(long **)puVar4 + 0x480,*(int *)(param_1 + 8),&local_28,uVar6,uVar5,0);
    }
  }
  return;
}

