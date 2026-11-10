
undefined8 FUN_001018b0(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0x8033;
  }
  if (param_4 == 0) {
    return 0x8533;
  }
  if (param_3 != (undefined8 *)0x0) {
    FUN_001056b0(param_1,param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_2;
    *(undefined8 *)(param_1 + 0xb750) = *param_3;
    bVar3 = (*(byte *)((long)param_3 + 0x67) & 0xf0) != 0x50;
    lVar1 = 0x7c;
    if (bVar3) {
      lVar1 = 0x7a;
    }
    lVar2 = 0x72;
    if (bVar3) {
      lVar2 = 0x70;
    }
    *(ushort *)(param_1 + 0xb9bc) =
         (*(ushort *)((long)param_3 + lVar1) & 0x7f) + (*(ushort *)((long)param_3 + lVar2) & 0x7f);
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  uVar4 = FUN_00103430(param_1,param_1 + 0x28,param_4);
  return uVar4;
}

