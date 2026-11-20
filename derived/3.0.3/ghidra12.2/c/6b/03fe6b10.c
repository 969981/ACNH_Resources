
void FUN_03fe6b10(void *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined1 *)((long)param_1 + 0x12000) = 0;
  memset(param_1,0,0x10000);
  lVar3 = 0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3 + 0x10000);
    lVar3 = lVar3 + 0x20;
    *puVar2 = 0x800080008000800;
    puVar2[1] = 0x800080008000800;
    puVar2[2] = 0x800080008000800;
    puVar2[3] = 0x800080008000800;
  } while (lVar3 != 0x2000);
  lVar3 = 0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3 + 0x10004);
    lVar3 = lVar3 + 0x20;
    *puVar2 = 0x600060006000600;
    puVar2[0x200] = 0x600060006000600;
  } while (lVar3 != 0x800);
  lVar3 = 0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3 + 0x8010);
    *(undefined8 *)((long)param_1 + lVar3 + 0x4010) = 1;
    lVar1 = lVar3 + 0x80;
    puVar2[0x800] = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x10) = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x18) = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x4018) = 1;
    puVar2[0x801] = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x4020) = 2;
    puVar2[0x802] = 2;
    *(undefined8 *)((long)param_1 + lVar3 + 0x4028) = 2;
    puVar2[0x803] = 2;
    *puVar2 = 1;
    puVar2[1] = 1;
    *(undefined8 *)((long)param_1 + lVar3 + 0x20) = 2;
    *(undefined8 *)((long)param_1 + lVar3 + 0x28) = 2;
    puVar2[2] = 2;
    puVar2[3] = 2;
    lVar3 = lVar1;
  } while (lVar1 != 0x2000);
  memset((void *)((long)param_1 + 0x12001),0,0x2000);
  return;
}

