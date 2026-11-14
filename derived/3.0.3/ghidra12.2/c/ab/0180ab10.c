
void FUN_0180ab10(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  plVar1 = DAT_05292338;
  if (DAT_05292338 != (long *)0x0) {
    if (*(char *)((long)DAT_05292338 + 0xee4) != '\0') {
      iVar4 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar4 = 0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar3,0);
          iVar4 = 0;
          if (((iVar2 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) &&
             (iVar4 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
            iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
      if (DAT_0529240c == iVar4) {
        *(byte *)((long)plVar1 + 0xf8c) = *(byte *)((long)plVar1 + 0xf8c) & 0xfe;
        FUN_036eb4c0((int)plVar1[0x1f1]);
      }
    }
    puVar3 = DAT_052922d8;
    if (DAT_052922d8 != (undefined8 *)0x0) {
      DAT_052922d8 = (undefined8 *)0x0;
      (**(code **)*puVar3)();
      if (DAT_05292338 != (long *)0x0) {
        (**(code **)(*DAT_05292338 + 8))();
      }
      DAT_05292338 = (long *)0x0;
    }
  }
  puVar3 = DAT_05290138;
  if ((DAT_05290150 != (long *)0x0) && (DAT_05290138 != (undefined8 *)0x0)) {
    DAT_05290138 = (undefined8 *)0x0;
    (**(code **)*puVar3)();
    if (DAT_05290150 != (long *)0x0) {
      (**(code **)(*DAT_05290150 + 8))();
    }
    DAT_05290150 = (long *)0x0;
  }
  return;
}

