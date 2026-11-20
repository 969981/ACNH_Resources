
void FUN_03d66950(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *__src;
  long local_a8;
  undefined *puStack_a0;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  long local_48;
  
  if (*(long *)(param_1 + 0x1e8) == 0) {
    if ((param_3 != 0) && (*(long *)(param_3 + 0x18) == 0 && *(long *)(param_3 + 0x10) == 0)) {
      lVar3 = *(long *)(param_3 + 0x38);
      plVar5 = (long *)(lVar3 + 0x40);
      lVar4 = *plVar5;
      plVar1 = (long *)(*(int *)(lVar3 + 0x54) + param_3);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    }
  }
  else {
    local_4d = 0;
    local_90 = 0x40;
    local_8c[0] = 0;
    puStack_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8 = param_1;
    local_98 = local_8c;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (undefined1 *)param_2[1];
    if (local_8c != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar3 = 0;
      do {
        if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_03d66a64;
        lVar4 = param_2[1] + lVar3;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_03d66a64;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_03d66a64;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_03d66a64:
      iVar2 = (int)lVar3;
      if (local_90 <= (int)lVar3) {
        iVar2 = local_90 + -1;
      }
      memcpy(local_8c,__src,(long)iVar2);
      local_8c[iVar2] = 0;
    }
    local_48 = param_3;
    (**(code **)**(undefined8 **)(param_1 + 0x1e8))(*(undefined8 **)(param_1 + 0x1e8),&local_a8);
  }
  return;
}

