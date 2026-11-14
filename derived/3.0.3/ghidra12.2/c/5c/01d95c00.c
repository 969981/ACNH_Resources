
void FUN_01d95c00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  short local_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 local_24;
  
  if (*(int *)(DAT_0537d558 + 0x80) != 1) {
    FUN_02523cf0(&local_40,param_2);
    if (local_40 != -2) {
      *(short *)(param_1 + 0x120) = local_40;
      *(undefined2 *)(param_1 + 0x122) = uStack_3e;
      *(undefined4 *)(param_1 + 0x124) = uStack_3c;
    }
    uStack_30 = 0;
    uStack_2c = 0;
    local_40 = 0;
    uStack_3e = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    FUN_0255a2b0(param_2,&local_40);
    uVar2 = uStack_30;
    lVar4 = *(long *)PTR_DAT_04bb2720;
    if (lVar4 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(lVar4 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
        iVar3 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    puVar1 = PTR_DAT_04bc39e0;
    *(undefined4 *)(PTR_DAT_04bc39e0 + 0x58) = *(undefined4 *)(puVar5 + 7);
    FUN_0292e870(&local_24,0xf);
    puVar1[0x70] = 0;
    puVar1[0x72] = 0;
    *(ulong *)(puVar1 + 0x5c) = CONCAT44(uStack_38,uStack_3c);
    *(undefined4 *)(puVar1 + 100) = local_34;
    *(undefined4 *)(puVar1 + 0x68) = uVar2;
    *(undefined4 *)(puVar1 + 0x6c) = local_24;
  }
  FUN_02918280();
  return;
}

