
void FUN_03b18c30(long param_1,byte param_2,uint param_3)

{
  char *__src;
  char cVar1;
  long *plVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  ulong __n;
  uint uVar7;
  uint uVar8;
  char local_90 [64];
  
  plVar6 = *(long **)(param_1 + 0x60);
  if (*(long **)(param_1 + 0x68) == (long *)0x0) {
    if (plVar6 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x99) = 0;
      FUN_03b18ee0(param_1,*(long *)(*(long *)(param_1 + 0x18) + 0x18) != 0 & (param_2 ^ 1));
      goto LAB_03b18e90;
    }
    if ((param_3 & 1) == 0) {
      if (*(float *)(plVar6 + 10) <= 0.0) {
        (**(code **)(*plVar6 + 0xc0))(0xbf800000,plVar6);
        plVar6 = *(long **)(param_1 + 0x88);
      }
      else {
        (**(code **)(*plVar6 + 200))(0xbf800000,plVar6,0);
        plVar6 = *(long **)(param_1 + 0x88);
      }
      if ((((plVar6 != (long *)0x0) && (plVar6[0x1a] != 0)) && (*(long *)(param_1 + 0x90) != 0)) &&
         (*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + 0x18) == 0)) {
        __src = (char *)(*(long *)(param_1 + 0x18) + 0xb0);
        if (local_90 == __src) goto LAB_03b18e40;
        uVar7 = 0xffffffff;
        pcVar4 = __src;
        do {
          cVar1 = *pcVar4;
          uVar7 = uVar7 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        goto joined_r0x03b18e30;
      }
      goto LAB_03b18e88;
    }
    pcVar3 = *(code **)(*plVar6 + 0xe0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar6 != (long *)0x0) {
      FUN_0035d98c(plVar6,0);
      *(undefined4 *)(plVar6 + 10) = 0;
      plVar2 = *(long **)(param_1 + 0x68);
    }
    plVar6 = plVar2;
    if ((param_3 & 1) == 0) {
      (**(code **)(*plVar6 + 0xc0))(0x3f800000);
      plVar6 = *(long **)(param_1 + 0x88);
      if (((plVar6 != (long *)0x0) && (plVar6[0x1a] != 0)) &&
         ((*(long *)(param_1 + 0x90) != 0 &&
          (*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + 0x18) == 0)))) {
        __src = (char *)(*(long *)(param_1 + 0x18) + 0xb0);
        if (local_90 == __src) {
LAB_03b18e40:
          local_90[0] = '\0';
          __n = 0;
LAB_03b18e44:
          uVar8 = 6;
LAB_03b18e48:
          memcpy(local_90 + __n,"_close",(ulong)uVar8);
          local_90[uVar8 + __n] = '\0';
        }
        else {
          uVar7 = 0xffffffff;
          pcVar4 = __src;
          do {
            cVar1 = *pcVar4;
            uVar7 = uVar7 + 1;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
joined_r0x03b18e30:
          if ((int)uVar7 < 1) {
            __n = 0;
            local_90[0] = '\0';
            goto LAB_03b18e44;
          }
          local_90[0] = '\0';
          uVar8 = uVar7;
          if (0x3e < (int)uVar7) {
            uVar8 = 0x3f;
          }
          __n = (ulong)uVar8;
          memcpy(local_90,__src,__n);
          local_90[__n] = '\0';
          if (uVar8 < 0x3a) goto LAB_03b18e44;
          if ((int)uVar7 < 0x3f) {
            uVar8 = 0x3f - uVar8;
            goto LAB_03b18e48;
          }
        }
        (**(code **)(*plVar6 + 0x250))(plVar6,local_90);
      }
LAB_03b18e88:
      *(undefined1 *)(param_1 + 0x99) = 3;
      goto LAB_03b18e90;
    }
    pcVar3 = *(code **)(*plVar6 + 0xe8);
  }
  (*pcVar3)(plVar6);
  *(undefined1 *)(param_1 + 0x99) = 0;
LAB_03b18e90:
  if ((param_2 & 1) != 0) {
    for (lVar5 = *(long *)(param_1 + 0x50); lVar5 != param_1 + 0x48; lVar5 = *(long *)(lVar5 + 8)) {
      FUN_03b18c30(*(undefined8 *)(lVar5 + 0x10),1,param_3 & 1);
    }
  }
  return;
}

