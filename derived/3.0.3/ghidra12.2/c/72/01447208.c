
void FUN_01447208(long param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  if (*(int *)(*(long *)(param_1 + 0x2e8) + 0x2d0) == 1) {
    local_40 = 0;
    lVar4 = *(long *)PTR_DAT_04bb2720;
    if (lVar4 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(lVar4 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
        iVar2 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar5 + 7);
    local_38 = FUN_017baf44();
    local_38 = local_38 & 1;
    local_48 = PTR_DAT_04bb5438 + 0x10;
    puVar3 = (undefined2 *)FUN_01a5190c(&local_48,0,*(long *)(param_1 + 0x2e8) + 0x2c0,0);
    local_18 = *puVar3;
    local_14 = *(undefined4 *)(puVar3 + 2);
    local_16 = *(undefined1 *)(puVar3 + 1);
    local_15 = *(undefined1 *)((long)puVar3 + 3);
    bVar1 = FUN_01aef228(&local_18,*param_3 + 0x20000000U >> 0x1e);
    bVar1 = bVar1 & 1;
  }
  else {
    bVar1 = 1;
  }
  *(byte *)(param_1 + 0x35c) = bVar1;
  return;
}

