
void FUN_025da3c0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  
  if (((*(long *)(param_1 + 8) == 0) || (lVar3 = *(long *)(*(long *)(param_1 + 8) + 8), lVar3 == 0))
     || (*(char *)(DAT_05554928 + 0xb1) != '\0')) {
LAB_025da3f8:
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  lVar3 = FUN_03f28df0(lVar3,0x1d);
  if (lVar3 == 0) {
    *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
    goto LAB_025da3f8;
  }
  *(long *)(param_1 + 0x28) = lVar3;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0xa0);
  }
  else {
    plVar4 = *(long **)(DAT_05554928 + 0x28);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar3 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_025da4b8;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa0,8);
  }
  if (pvVar6 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0x1400000000;
    *(void **)(param_1 + 0x40) = pvVar6;
    if (((DAT_05554928 != 0) && (*(char *)(DAT_05554928 + 0xb1) == '\0')) &&
       ((*(long *)(param_1 + 8) != 0 && (lVar3 = *(long *)(*(long *)(param_1 + 8) + 8), lVar3 != 0))
       )) {
      lVar3 = FUN_03f29260(lVar3,0x14,0x20);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x30) = lVar3;
        puVar2 = PTR_DAT_04bc3578;
        iVar8 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x30);
          lVar3 = FUN_03f2a10c(0x20,**(undefined8 **)puVar2,1);
          if ((lVar3 != 0) &&
             (uVar1 = *(uint *)(lVar5 + 0x38), uVar7 = (ulong)uVar1, 0 < (int)uVar1)) {
            plVar4 = *(long **)(lVar5 + 0x40);
            do {
              if (*plVar4 == 0) {
                *plVar4 = lVar3;
                if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
                  *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = lVar3;
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
                }
                break;
              }
              plVar4 = plVar4 + 1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          iVar8 = iVar8 + 1;
          if (iVar8 == 0x14) {
            return;
          }
        } while( true );
      }
      *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
LAB_025da4b8:
  *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
  return;
}

