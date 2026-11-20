
undefined8 * FUN_03d4e210(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  
  puVar1 = (undefined8 *)(*DAT_05ae78a0)(0x30);
  *puVar1 = param_1;
  FUN_038f41c0(puVar1,"MsgFlwBn",3);
  uVar2 = (ulong)*(ushort *)((long)puVar1 + 0x12);
  if (uVar2 == 0) {
    uVar4 = 0xffffffff;
    puVar1[4] = 0xffffffffffffffff;
  }
  else {
    lVar3 = puVar1[3];
    uVar5 = 0;
    pcVar6 = (char *)(lVar3 + 0xb);
    do {
      if ((((pcVar6[-3] == 'F') && (pcVar6[-2] == 'L')) && (pcVar6[-1] == 'W')) && (*pcVar6 == '3'))
      goto LAB_03d4e2ac;
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 0x18;
    } while (uVar2 != uVar5);
    uVar5 = 0xffffffff;
LAB_03d4e2ac:
    uVar7 = 0;
    *(int *)(puVar1 + 4) = (int)uVar5;
    pcVar6 = (char *)(lVar3 + 0xb);
    uVar4 = 0xffffffff;
    do {
      if (((pcVar6[-3] == 'F') && (pcVar6[-2] == 'E')) && ((pcVar6[-1] == 'N' && (*pcVar6 == '1'))))
      {
        uVar4 = (uint)uVar7 & 0xffff;
        break;
      }
      uVar7 = uVar7 + 1;
      pcVar6 = pcVar6 + 0x18;
    } while (uVar2 != uVar7);
    uVar5 = 0;
    *(uint *)((long)puVar1 + 0x24) = uVar4;
    pcVar6 = (char *)(lVar3 + 0xb);
    uVar4 = 0xffffffff;
    do {
      if (((pcVar6[-3] == 'R') && (pcVar6[-2] == 'E')) && ((pcVar6[-1] == 'F' && (*pcVar6 == '1'))))
      {
        uVar4 = (uint)uVar5 & 0xffff;
        break;
      }
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 0x18;
    } while (uVar2 != uVar5);
  }
  *(uint *)(puVar1 + 5) = uVar4;
  return puVar1;
}

