
void FUN_00debfa0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  switch(param_2) {
  default:
    puVar8 = (undefined4 *)&DAT_05586008;
    break;
  case 1:
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar6[3];
    uVar1 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    puVar6[2] = uVar2;
    puVar6[3] = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    FUN_01b8eb70(param_1,param_4,param_5,param_3);
    return;
  case 2:
    puVar8 = &DAT_05405f5c;
    break;
  case 3:
    if (DAT_05739190 == 0) {
      lVar10 = 0;
      if (DAT_00000028 != '\0') goto LAB_00dec080;
LAB_00dec0f8:
      bVar5 = 1;
    }
    else {
      lVar10 = *(long *)(DAT_05739190 + 0x28);
      if (*(char *)(lVar10 + 0x28) == '\0') goto LAB_00dec0f8;
LAB_00dec080:
      bVar5 = (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
      *(undefined1 *)(lVar10 + 0x28) = 0;
    }
    *(byte *)(lVar10 + 0x29) = bVar5 & 1;
    *(undefined2 *)param_1 = *(undefined2 *)(lVar10 + 0x2c);
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar10 + 0x2e);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar10 + 0x2f);
    uVar7 = *(undefined4 *)(lVar10 + 0x30);
    goto LAB_00dec204;
  case 4:
    if (DAT_05739190 == 0) {
      lVar10 = 0;
      cVar3 = cRam0000000000000078;
    }
    else {
      lVar10 = *(long *)(DAT_05739190 + 0x28);
      cVar3 = *(char *)(lVar10 + 0x78);
    }
    if (cVar3 == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar10 + 0x70) + 0x18))((long *)(lVar10 + 0x70));
      *(undefined1 *)(lVar10 + 0x78) = 0;
    }
    plVar11 = (long *)(lVar10 + 0x88);
    *(byte *)(lVar10 + 0x79) = bVar5 & 1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    if (*(char **)(lVar10 + 0x90) == "Player") {
LAB_00dec220:
      *param_1 = 0x29f5;
      FUN_0277d4ac(param_1);
      return;
    }
    uVar9 = 0;
    bVar4 = true;
    do {
      cVar3 = (*(char **)(lVar10 + 0x90))[uVar9];
      if (cVar3 != "Player"[uVar9]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_00dec220;
        break;
      }
      bVar4 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    FUN_021f6050(param_1,plVar11);
    return;
  case 5:
    if (DAT_05739190 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(DAT_05739190 + 0x28);
    }
    if (*(char *)(lVar10 + 0x1d38) == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar10 + 0x1d30) + 0x18))(lVar10 + 0x1d30);
      *(char *)(lVar10 + 0x1d38) = '\0';
    }
    *(byte *)(lVar10 + 0x1d39) = bVar5 & 1;
    *(undefined2 *)param_1 = *(undefined2 *)(lVar10 + 0x1d3c);
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar10 + 0x1d3e);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar10 + 0x1d3f);
    uVar7 = *(undefined4 *)(lVar10 + 0x1d40);
    goto LAB_00dec204;
  }
  uVar7 = puVar8[1];
  *(undefined4 *)param_1 = *puVar8;
LAB_00dec204:
  *(undefined4 *)((long)param_1 + 4) = uVar7;
  return;
}

