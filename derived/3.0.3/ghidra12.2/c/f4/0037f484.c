
void FUN_0037f484(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_44;
  
  plVar7 = *(long **)(param_5 + 0x30);
  lVar6 = *plVar7;
  *(long *)(param_1 + 8) = param_4;
  if ((*(byte *)(param_4 + 0x14) & 1) != 0) {
    lVar4 = **(long **)(param_5 + 0x30) + 0xc;
    uVar1 = *(uint *)(lVar4 + (ulong)*(ushort *)(param_4 + 0x10) * 4);
    uVar3 = FUN_003693bc(*(undefined8 *)(param_5 + 0xa0));
    lVar4 = FUN_0036b150(uVar3,lVar4 + (ulong)uVar1);
    uVar5 = 3;
    if (0 < *(int *)(param_5 + 0xdc)) {
      uVar5 = 1;
    }
    *(undefined1 *)(lVar4 + 0x18) = uVar5;
    FUN_0038789c(param_1 + 0x20,*(undefined8 *)(lVar4 + 8));
  }
  FUN_003878b8(param_1 + 0x20,*(byte *)(param_4 + 0x12) & 3,*(byte *)(param_4 + 0x13) & 3);
  FUN_003878d4(param_1 + 0x20,*(byte *)(param_4 + 0x12) >> 2 & 3,*(byte *)(param_4 + 0x13) >> 2 & 3)
  ;
  lVar6 = lVar6 + 0xc + (ulong)*(uint *)(lVar6 + 0xc + (ulong)*(ushort *)(param_4 + 8) * 4);
  if ((*(uint *)(param_4 + 0xc) & 1) == 0) {
    if ((*(uint *)(param_4 + 0xc) >> 1 & 1) != 0) {
      uVar3 = FUN_003693bc(*(undefined8 *)(param_5 + 0xa0));
      lVar4 = FUN_0036b09c(uVar3,lVar6);
      FUN_0036b6a0(uVar3,param_2,param_3,*(undefined8 *)(param_5 + 0x20),plVar7[6],lVar6);
      FUN_0038789c(param_1 + 0x10,*(undefined8 *)(lVar4 + 8));
      *(undefined1 *)(param_1 + 0x228) = 1;
      goto LAB_0037f640;
    }
    uVar3 = (**(code **)(*(long *)plVar7[6] + 0x70))((long *)plVar7[6],param_3,lVar6);
  }
  else {
    uVar3 = FUN_003693bc(*(undefined8 *)(param_5 + 0xa0));
    lVar6 = FUN_0036b420(uVar3,lVar6);
    if (lVar6 == 0) {
      lVar6 = **(long **)(param_5 + 0x30) + 0xc;
      uVar1 = *(uint *)(lVar6 + (ulong)*(ushort *)(param_4 + 8) * 4);
      uVar3 = FUN_003693bc(*(undefined8 *)(param_5 + 0xa0));
      lVar6 = FUN_0036b150(uVar3,lVar6 + (ulong)uVar1);
      uVar5 = 3;
      if (0 < *(int *)(param_5 + 0xdc)) {
        uVar5 = 1;
      }
      *(undefined1 *)(lVar6 + 0x18) = uVar5;
      *(undefined1 *)(param_1 + 0x228) = 1;
    }
    uVar3 = *(undefined8 *)(lVar6 + 8);
  }
  FUN_0038789c(param_1 + 0x10,uVar3);
LAB_0037f640:
  FUN_003878b8(param_1 + 0x10,*(byte *)(param_4 + 10) & 3,*(byte *)(param_4 + 0xb) & 3);
  FUN_003878d4(param_1 + 0x10,*(byte *)(param_4 + 10) >> 2 & 3,*(byte *)(param_4 + 0xb) >> 2 & 3);
  local_44 = 0;
  lVar6 = FUN_0036abf8(*(undefined8 *)(param_5 + 0x20),param_3,0x4b53414d,1,&local_44);
  *(long *)(param_1 + 0x38) = lVar6;
  uVar2 = FUN_0038c040(*(undefined8 *)(lVar6 + 0x38),0x4b53414d,1,&local_44);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}

