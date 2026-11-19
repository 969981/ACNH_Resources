
void FUN_039e1200(long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    lVar5 = 0;
    lVar8 = *(long *)(param_1 + 0x1d8);
    iVar7 = 0;
    lVar6 = *(long *)(*(long *)(param_1 + 0x2a68) + 0x10);
    do {
      uVar2 = *(ushort *)(param_1 + 0x3f8);
      lVar4 = lVar8 + (long)iVar7 * 0x910;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = *(ushort *)(param_1 + 0x598);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      FUN_039e4420(lVar4,uVar2,uVar3);
      if (*(long *)(lVar4 + 0x170) == 0) {
        uStack_64 = *(undefined4 *)(param_1 + 0x2a5c);
        local_68 = *(int *)(param_1 + 0x2a58) + (int)lVar5;
        local_60 = *(undefined8 *)(param_1 + 0x2a60);
        uStack_58 = *(undefined8 *)(param_1 + 0x2a68);
        lVar4 = FUN_039e4580(lVar4,&local_68,lVar6 - lVar5);
        lVar5 = lVar4 + lVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
    iVar1 = *(int *)(param_1 + 0x1d0);
    if (iVar1 != 0) {
      lVar8 = *(long *)(param_1 + 0x1d8);
      iVar7 = 0;
      do {
        if (*(long *)(lVar8 + (long)iVar7 * 0x910 + 0x170) != 0) {
          uStack_7c = *(undefined4 *)(param_1 + 0x2a5c);
          local_78 = *(undefined8 *)(param_1 + 0x2a60);
          local_80 = *(int *)(param_1 + 0x2a58) + (int)lVar5;
          uStack_70 = *(undefined8 *)(param_1 + 0x2a68);
          lVar4 = FUN_039e4580(lVar8 + (long)iVar7 * 0x910,&local_80,lVar6 - lVar5);
          lVar5 = lVar4 + lVar5;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
  }
  return;
}

