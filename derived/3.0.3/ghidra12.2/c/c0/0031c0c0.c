
void FUN_0031c0c0(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  if (*(long *)(*(long *)(param_1 + 0x240) + 0x290) == 0) {
    pcVar4 = (code *)0x0;
    lVar2 = *(long *)(param_1 + 0x478);
  }
  else {
    pcVar4 = *(code **)(*(long *)(**(long **)(param_1 + 0x4d0) + 0x28) + 0x40);
    lVar2 = *(long *)(param_1 + 0x478);
  }
  if (*(long *)(param_1 + 0x480) == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    pcVar5 = *(code **)(*(long *)(param_1 + 0x480) + 0x40);
  }
  if (*(long *)(param_1 + 0x470) == 0) {
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = *(code **)(*(long *)(param_1 + 0x470) + 0x40);
  }
  if (lVar2 == 0) {
    pcVar3 = (code *)0x0;
  }
  else {
    pcVar3 = *(code **)(lVar2 + 0x40);
  }
  if (((((pcVar4 != (code *)0x0) || (pcVar5 != (code *)0x0)) || (pcVar6 != (code *)0x0)) ||
      (pcVar3 != (code *)0x0)) && (0 < *(int *)(param_1 + 0x28))) {
    lVar7 = 0;
    lVar2 = 0;
    if (pcVar4 == (code *)0x0) {
      do {
        lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
        uStack_5c = *(undefined4 *)(lVar1 + 0xc);
        local_58 = (undefined4)lVar7;
        local_60 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
        local_78 = *(undefined8 *)(lVar1 + 0x10);
        local_70 = *(undefined8 *)(lVar1 + 0x18);
        local_68 = param_1;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(&local_78);
        }
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(&local_78);
        }
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(&local_78);
        }
        lVar7 = lVar7 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar2 + 0x18) = 0;
        lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
        lVar2 = lVar2 + 0x20;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      } while (lVar7 < *(int *)(param_1 + 0x28));
    }
    else {
      lVar2 = 0;
      if (pcVar5 == (code *)0x0) {
        do {
          lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
          uStack_5c = *(undefined4 *)(lVar1 + 0xc);
          local_58 = (undefined4)lVar7;
          local_60 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
          local_78 = *(undefined8 *)(lVar1 + 0x10);
          local_70 = *(undefined8 *)(lVar1 + 0x18);
          local_68 = param_1;
          (*pcVar4)(&local_78);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(&local_78);
          }
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(&local_78);
          }
          lVar7 = lVar7 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar2 + 0x18) = 0;
          lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
          lVar2 = lVar2 + 0x20;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        } while (lVar7 < *(int *)(param_1 + 0x28));
      }
      else {
        lVar2 = 0;
        if (pcVar6 == (code *)0x0) {
          do {
            lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
            uStack_5c = *(undefined4 *)(lVar1 + 0xc);
            local_58 = (undefined4)lVar7;
            local_60 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
            local_78 = *(undefined8 *)(lVar1 + 0x10);
            local_70 = *(undefined8 *)(lVar1 + 0x18);
            local_68 = param_1;
            (*pcVar4)(&local_78);
            (*pcVar5)(&local_78);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(&local_78);
            }
            lVar7 = lVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar2 + 0x18) = 0;
            lVar1 = *(long *)(param_1 + 0xb0) + lVar2;
            lVar2 = lVar2 + 0x20;
            *(undefined8 *)(lVar1 + 0x10) = 0;
          } while (lVar7 < *(int *)(param_1 + 0x28));
        }
        else {
          lVar2 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0xb0) + lVar7;
            uStack_5c = *(undefined4 *)(lVar1 + 0xc);
            local_58 = (undefined4)lVar2;
            local_60 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
            local_78 = *(undefined8 *)(lVar1 + 0x10);
            local_70 = *(undefined8 *)(lVar1 + 0x18);
            local_68 = param_1;
            (*pcVar4)(&local_78);
            (*pcVar5)(&local_78);
            (*pcVar6)(&local_78);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(&local_78);
            }
            lVar2 = lVar2 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar7 + 0x18) = 0;
            lVar1 = *(long *)(param_1 + 0xb0) + lVar7;
            lVar7 = lVar7 + 0x20;
            *(undefined8 *)(lVar1 + 0x10) = 0;
          } while (lVar2 < *(int *)(param_1 + 0x28));
        }
      }
    }
  }
  return;
}

