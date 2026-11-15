
void FUN_01ea7504(long param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 0x7d78);
  puVar4 = (undefined8 *)(param_1 + 0x7d80);
  uVar2 = (**(code **)(*(long *)(param_1 + 0x7d80) + 0x10))(puVar4);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
    plVar5 = plVar1;
  }
  else {
    if (*plVar1 == param_2) {
      return;
    }
    puVar4 = (undefined8 *)(param_1 + 0x7db0);
    uVar2 = (**(code **)(*(long *)(param_1 + 0x7db0) + 0x10))(puVar4);
    if ((uVar2 & 1) == 0) {
      lVar3 = 1;
      plVar5 = (long *)(param_1 + 0x7da8);
    }
    else {
      if (*(long *)(param_1 + 0x7da8) == param_2) {
        return;
      }
      puVar4 = (undefined8 *)(param_1 + 0x7de0);
      uVar2 = (**(code **)(*(long *)(param_1 + 0x7de0) + 0x10))(puVar4);
      if ((uVar2 & 1) == 0) {
        lVar3 = 2;
        plVar5 = (long *)(param_1 + 0x7dd8);
      }
      else {
        if (*(long *)(param_1 + 0x7dd8) == param_2) {
          return;
        }
        puVar4 = (undefined8 *)(param_1 + 0x7e10);
        uVar2 = (**(code **)(*(long *)(param_1 + 0x7e10) + 0x10))(puVar4);
        if ((uVar2 & 1) == 0) {
          lVar3 = 3;
          plVar5 = (long *)(param_1 + 0x7e08);
        }
        else {
          if (*(long *)(param_1 + 0x7e08) == param_2) {
            return;
          }
          puVar4 = (undefined8 *)(param_1 + 0x7e40);
          uVar2 = (**(code **)(*(long *)(param_1 + 0x7e40) + 0x10))(puVar4);
          if ((uVar2 & 1) == 0) {
            lVar3 = 4;
            plVar5 = (long *)(param_1 + 0x7e38);
          }
          else {
            if (*(long *)(param_1 + 0x7e38) == param_2) {
              return;
            }
            puVar4 = (undefined8 *)(param_1 + 0x7e70);
            uVar2 = (**(code **)(*(long *)(param_1 + 0x7e70) + 0x10))(puVar4);
            if ((uVar2 & 1) == 0) {
              lVar3 = 5;
              plVar5 = (long *)(param_1 + 0x7e68);
            }
            else {
              if (*(long *)(param_1 + 0x7e68) == param_2) {
                return;
              }
              puVar4 = (undefined8 *)(param_1 + 0x7ea0);
              uVar2 = (**(code **)(*(long *)(param_1 + 0x7ea0) + 0x10))(puVar4);
              if ((uVar2 & 1) == 0) {
                lVar3 = 6;
                plVar5 = (long *)(param_1 + 0x7e98);
              }
              else {
                if (*(long *)(param_1 + 0x7e98) == param_2) {
                  return;
                }
                puVar4 = (undefined8 *)(param_1 + 0x7ed0);
                uVar2 = (**(code **)(*(long *)(param_1 + 0x7ed0) + 0x10))(puVar4);
                if ((uVar2 & 1) != 0) {
                  return;
                }
                lVar3 = 7;
                plVar5 = (long *)(param_1 + 0x7ec8);
              }
            }
          }
        }
      }
    }
  }
  *puVar4 = &PTR_LAB_04a5eb98;
  puVar4[1] = param_2;
  *plVar5 = param_2;
  *(undefined1 *)(plVar1 + lVar3 * 6 + 5) = param_3;
  return;
}

