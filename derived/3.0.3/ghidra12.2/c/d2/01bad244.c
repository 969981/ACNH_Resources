
void FUN_01bad244(undefined8 *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  void *__ptr;
  
  puVar2 = (undefined4 *)param_1[0x24];
  if (puVar2 == (undefined4 *)0x0) goto LAB_01bad374;
  if ((*(byte *)(puVar2 + 4) >> 1 & 1) != 0) {
    *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) & 0xf8 | 4;
    if (*(long *)(puVar2 + 0xc) == 0) {
      if (*(long *)(puVar2 + 6) != 0) goto LAB_01bad29c;
    }
    else {
      FUN_03f45838(puVar2 + 8);
      if (*(long *)(puVar2 + 6) == 0) {
        puVar2[5] = 0xe;
      }
      else {
LAB_01bad29c:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,puVar2 + 2);
        }
      }
    }
  }
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x12] = 0;
  **(undefined1 **)(puVar2 + 0x16) = 0;
  **(undefined1 **)(puVar2 + 0x2c) = 0;
  __ptr = (void *)param_1[0x24];
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 0x10) >> 1 & 1) != 0) {
      *(byte *)((long)__ptr + 0x10) = *(byte *)((long)__ptr + 0x10) & 0xf8 | 4;
      if (*(long *)((long)__ptr + 0x30) == 0) {
        if (*(long *)((long)__ptr + 0x18) != 0) goto LAB_01bad318;
      }
      else {
        FUN_03f45838((long)__ptr + 0x20);
        if (*(long *)((long)__ptr + 0x18) == 0) {
          *(undefined4 *)((long)__ptr + 0x14) = 0xe;
        }
        else {
LAB_01bad318:
          if (DAT_05b05848 != 0) {
            FUN_03f350f4(DAT_05b05848,(long)__ptr + 8);
          }
        }
      }
    }
    FUN_03f457c4((long)__ptr + 0x20);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  param_1[0x24] = 0;
LAB_01bad374:
  *param_1 = &PTR_LAB_048fc7e8;
  return;
}

