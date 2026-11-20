
uint FUN_03f44830(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_50 [8];
  long *local_48;
  
  if ((*(long *)(param_2 + 0x10) != 0) || (*(long *)(param_2 + 0x18) != 0)) {
    lVar4 = param_1[5];
    bVar1 = false;
    uVar2 = *(uint *)(param_1 + 8);
    if ((lVar4 != 0) && (uVar2 == 5)) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      uVar2 = *(uint *)(param_1 + 8);
      bVar1 = lVar4 == lVar3;
    }
    if (((uVar2 < 7) && ((1 << (ulong)(uVar2 & 0x1f) & 0x43U) != 0)) || (bVar1)) {
      if ((*(char *)(param_2 + 9) == '\0') && (*(char *)(param_2 + 8) == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      *(bool *)((long)param_1 + 9) = bVar1;
      *(bool *)((long)param_1 + 9) = bVar1;
      if (param_1[10] == 0 && param_1[9] == 0) {
        if (bVar1) {
          nn::os::ClearLightEvent((LightEventType *)(param_1 + 0xf));
        }
        lVar4 = *(long *)(param_2 + 0x18);
        param_1[4] = lVar4;
        if (lVar4 == 0) {
          lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x180);
          param_1[4] = lVar4;
          *(long *)(param_2 + 0x18) = lVar4;
        }
        param_1[3] = *(long *)(param_2 + 0x28);
        param_1[2] = *(long *)(param_2 + 0x20);
        param_1[7] = *(long *)(param_2 + 0x30);
        param_1[6] = *(long *)(param_2 + 0x38);
        param_1[0x12] = *(long *)(param_2 + 0x48);
        (**(code **)(*param_1 + 0x28))(param_1,param_2);
        if (*(char *)(param_2 + 9) != '\0') {
          plVar5 = (long *)param_1[4];
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          if ((*(byte *)(plVar5 + 1) & 1) != 0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          if ((int)plVar5[0xd] != 0) {
            plVar6 = (long *)plVar5[0xe];
            lVar3 = (long)(int)plVar5[0xd] << 3;
            do {
              if (*plVar6 == lVar4) {
                if ((*(byte *)(plVar5 + 1) & 1) != 0) {
                  (**(code **)(*plVar5 + 0x28))(plVar5);
                  lVar4 = *plVar6;
                }
                if (lVar4 == 0) goto LAB_03f44a20;
                FUN_03f44a6c(param_1,lVar4);
                uVar2 = 1;
                goto LAB_03f44a50;
              }
              plVar6 = plVar6 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
          if ((*(byte *)(plVar5 + 1) & 1) != 0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
        }
LAB_03f44a20:
        local_50[0] = *(undefined1 *)(param_2 + 10);
        local_48 = param_1;
        uVar2 = FUN_03f42970(param_1[4],local_50);
        if (((uVar2 & 1) != 0) && (*(char *)(param_2 + 9) != '\0')) {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf));
        }
        goto LAB_03f44a50;
      }
    }
  }
  uVar2 = 0;
LAB_03f44a50:
  return uVar2 & 1;
}

