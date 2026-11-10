
uint FUN_00105880(long param_1,undefined8 *param_2,ushort param_3,void *param_4,char param_5)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    uVar7 = 0xae32;
  }
  else if (param_4 == (void *)0x0) {
    uVar7 = 0x8532;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      FUN_001056b0(param_1,param_1 + 0x28);
      *(long *)(param_1 + 0x28) = param_1 + 0x6f510;
      bVar5 = (*(byte *)((long)param_2 + 0x67) & 0xf0) != 0x50;
      lVar1 = 0x72;
      if (bVar5) {
        lVar1 = 0x70;
      }
      lVar2 = 0x7c;
      if (bVar5) {
        lVar2 = 0x7a;
      }
      uVar3 = *(ushort *)((long)param_2 + lVar1);
      uVar4 = *(ushort *)((long)param_2 + lVar2);
      *(undefined8 *)(param_1 + 0xb750) = *param_2;
      *(ushort *)(param_1 + 0xb9bc) = (uVar4 & 0x7f) + (uVar3 & 0x7f);
      if (param_5 == '\x01') {
        *(undefined1 *)(param_1 + 0x3a) = 1;
        *(undefined8 **)(param_1 + 0x30) = param_2;
      }
      sVar6 = FUN_00103430(param_1,param_1 + 0x28,0);
      if (sVar6 < 0) {
        return (int)sVar6;
      }
    }
    if (param_3 < *(ushort *)(param_1 + 0xb9be)) {
      memcpy(param_4,(void *)(param_1 + (ulong)param_3 * 0x88 + 0x2e0),0x88);
      uVar7 = (uint)*(ushort *)(param_1 + 0xb9be);
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}

