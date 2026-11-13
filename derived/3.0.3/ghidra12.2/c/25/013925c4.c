
void FUN_013925c4(long param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar3 = PTR_DAT_04bb27d0;
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  if ((*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2) || (*(byte *)(lVar8 + 0x476) < 2)) {
    bVar2 = *(byte *)(lVar8 + 0x473);
    puVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar7 = (undefined1 *)(lVar8 + 0x473);
      }
    }
    local_3c[0] = *puVar7;
    uVar5 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
    FUN_013922f4(uVar6,local_3c,uVar5,uVar6 & 0xffffffff);
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff01;
    if (-1 < *(int *)(param_1 + 8)) {
      FUN_01db1df0(**(long **)puVar3 + 0x480,*(int *)(param_1 + 8),&local_38,uVar5,uVar4,0);
    }
  }
  return;
}

