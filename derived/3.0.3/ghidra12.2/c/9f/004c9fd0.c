
void FUN_004c9fd0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = *param_1;
  uVar2 = FUN_00427270(param_2);
  FUN_004297c0(auStack_50,uVar2);
  uVar1 = FUN_00427340(param_2);
  uStack_38 = FUN_0047b100(*(undefined8 *)(lVar7 + 0x110),auStack_50,uVar1);
  local_40 = 0xffffffffffffffff;
  puVar3 = (ulong *)FUN_004706d0(lVar7 + 0x68,&uStack_38,&local_40);
  uVar5 = *puVar3;
  if ((((int)uVar5 < 0) || ((int)uVar5 == 0x50000000)) ||
     (puVar6 = *(undefined8 **)
                (*(long *)(lVar7 + 0x58) +
                (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3)),
     puVar6 == (undefined8 *)0x0)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0x22222222;
    }
    lVar7 = *param_1;
    uVar4 = *(uint *)(lVar7 + 0xd0);
    if (uVar4 == (*(uint *)(lVar7 + 0xd4) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,lVar7 + 200,0x20);
      uVar4 = *(uint *)(lVar7 + 0xd0);
    }
    *(uint *)(lVar7 + 0xd0) = uVar4 + 1;
    puVar6 = (undefined8 *)(*(long *)(lVar7 + 200) + (long)(int)uVar4 * 0x20);
    *puVar6 = 0;
    FUN_0043be10(puVar6);
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0xffffffff;
    puVar6[2] = param_2;
    puVar6[3] = param_3;
  }
  else if (param_3 != (undefined8 *)0x0) {
    *param_3 = *puVar6;
  }
  return;
}

