
void FUN_0241ab84(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined8 local_54;
  ulong local_4c;
  undefined1 local_44;
  
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_58 = CONCAT31(local_58._1_3_,bVar4);
  lVar1 = FUN_025830c0(DAT_055021a0,&local_58,1);
  if (lVar1 != 0) {
    if ((*(long **)(lVar1 + 0x17f68) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x17f68), puVar2 == (undefined8 *)0x0)) {
      iVar5 = *(int *)(*(long *)(lVar1 + 0x17f50) + *(long *)(lVar1 + 0x17f48) + 0x18);
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      iVar5 = *(int *)(*(long *)(lVar1 + 0x17f50) + *(long *)(lVar1 + 0x17f48) + 0x18);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x17f68) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x17f68) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
    *(bool *)(param_1 + 0x17dc) = iVar5 != 1;
  }
  FUN_023203ac(param_1,0,0);
  local_58 = 0;
  local_54 = CONCAT44(6,(undefined4)local_54);
  local_54 = CONCAT71(local_54._1_7_,1);
  local_4c = local_4c & 0xffffffffff000000;
  FUN_02321e44(auStack_60,param_1,&local_58);
  FUN_023163dc(param_1,0);
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  local_54 = 0;
  local_4c = 0x3dcccccd00000000;
  local_44 = 0;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_58 = CONCAT31(local_58._1_3_,bVar4);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

