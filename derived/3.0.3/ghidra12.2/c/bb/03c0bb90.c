
int FUN_03c0bb90(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (0 < *param_2) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = *(undefined8 *)(param_2 + 4);
      *(undefined8 **)(param_2 + 4) = puVar2;
    } while (lVar3 < *param_2);
  }
  *param_2 = 0;
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined2 *)(param_1 + 0x2d5) = 0;
    lVar3 = DAT_05ae7888;
    if (DAT_05ae7888 < 0) {
      lVar3 = DAT_05ae7888 + 1;
    }
    uVar1 = nn::bcat::MountDeliveryCacheStorage();
    if (uVar1 != 0) {
      do {
        if ((uVar1 & 0x3fffff) != 0x67a) {
          *(uint *)(param_1 + 0x2d0) = uVar1;
          *(undefined1 *)(param_1 + 0x2d5) = 1;
          if (*(char *)(param_1 + 0x2d4) != '\0') {
            FUN_03ebb160(param_1 + 0x238,2);
          }
          goto LAB_03c0bc70;
        }
        nn::os::ConvertToTimeSpan(lVar3 >> 1);
        nn::os::SleepThread();
        uVar1 = nn::bcat::MountDeliveryCacheStorage();
      } while (uVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  FUN_03c0bcb0(param_1,param_2,param_3);
  nn::bcat::UnmountDeliveryCacheStorage();
  *(undefined1 *)(param_1 + 0x2d7) = 0;
LAB_03c0bc70:
  return *param_2;
}

