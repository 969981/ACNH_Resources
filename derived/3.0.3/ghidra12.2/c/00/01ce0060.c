
undefined8 FUN_01ce0060(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int local_690 [2];
  long local_688;
  
  FUN_0264d310(param_2);
  FUN_01ce0148(local_690);
  FUN_0264d170(local_690,0x32,param_2);
  *(undefined2 *)((long)param_1 + 0xd4) = 0;
  *param_1 = 0x2200000001;
  if (local_690[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    plVar5 = (long *)(local_688 + (long)local_690[0] * 8);
    puVar6 = (undefined2 *)((long)param_1 + 0x6c);
    do {
      plVar5 = plVar5 + -1;
      puVar7 = (ushort *)*plVar5;
      if ((*puVar7 >> 1 & 1) != 0) {
        *(short *)((long)param_1 + 0xd4) = *(short *)((long)param_1 + 0xd4) + 1;
        puVar7 = (ushort *)*plVar5;
      }
      bVar3 = 0x31 < uVar4;
      puVar1 = puVar6 + -0x32;
      if (bVar3) {
        puVar1 = (ushort *)(param_1 + 1);
      }
      uVar4 = uVar4 + 1;
      *puVar1 = puVar7[1];
      puVar2 = puVar6;
      if (bVar3) {
        puVar2 = (undefined2 *)((long)param_1 + 0x6c);
      }
      puVar6 = puVar6 + 1;
      *puVar2 = (short)*(undefined4 *)(*plVar5 + 4);
    } while ((long)local_690[0] != uVar4);
  }
  *(int *)(param_1 + 0x1a) = (int)uVar4;
  return 1;
}

