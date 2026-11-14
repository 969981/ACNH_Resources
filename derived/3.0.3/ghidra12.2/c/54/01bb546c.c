
bool FUN_01bb546c(long *param_1,long *param_2,long param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte local_74 [4];
  long local_70 [2];
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  uint local_28 [2];
  
  local_60 = *(long *)(param_3 + 0x18);
  lStack_48 = local_60 + (ulong)*(ushort *)(param_3 + 0x10);
  lStack_58 = param_3;
  local_50 = local_60;
  FUN_006f4120(&local_60,local_70,local_28,2);
  bVar1 = *param_4;
  if (bVar1 < 8) {
    uVar2 = 1;
    local_74[0] = bVar1;
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
    if (*(long **)(lVar3 + 0x17f68) != (long *)0x0) {
      puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17f68);
      if (puVar4 == (undefined8 *)0x0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
    }
    uVar5 = (uint)(*(int *)(*(long *)(lVar3 + 0x17f50) + *(long *)(lVar3 + 0x17f48) + 0x18) == 1);
    local_60 = CONCAT44(local_60._4_4_,uVar5);
    uVar7 = (ulong)uVar5;
    if (1 < uVar5) {
      uVar7 = 0;
    }
    lVar6 = local_70[uVar7];
    *param_1 = lVar6;
    uVar7 = (ulong)uVar5;
    if (1 < uVar5) {
      uVar7 = 0;
    }
    *param_2 = lVar6 + (ulong)local_28[uVar7] * 2;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x17f68) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17f68) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return bVar1 < 8;
}

