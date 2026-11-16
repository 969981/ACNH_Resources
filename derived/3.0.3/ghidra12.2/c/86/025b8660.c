
void FUN_025b8660(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb2268;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar5 = malloc(0x1e0);
  }
  else {
    plVar3 = *(long **)(*(long *)PTR_DAT_04bb2268 + 0x28);
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_025b8708;
    }
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1e0,8);
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0x3c00000000;
    *(void **)(param_1 + 0x40) = pvVar5;
    if ((((*(long *)puVar2 != 0) && (*(char *)(*(long *)puVar2 + 0xb1) == '\0')) &&
        (*(long *)(param_1 + 8) != 0)) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 8), lVar8 != 0)) {
      lVar8 = FUN_03f29260(lVar8,0x3c,0x20);
      if (lVar8 != 0) {
        *(long *)(param_1 + 0x30) = lVar8;
        puVar2 = PTR_DAT_04bc3578;
        iVar7 = 0;
        do {
          lVar4 = *(long *)(param_1 + 0x30);
          lVar8 = FUN_03f2a10c(0x20,**(undefined8 **)puVar2,1);
          if ((lVar8 != 0) &&
             (uVar1 = *(uint *)(lVar4 + 0x38), uVar6 = (ulong)uVar1, 0 < (int)uVar1)) {
            plVar3 = *(long **)(lVar4 + 0x40);
            do {
              if (*plVar3 == 0) {
                *plVar3 = lVar8;
                if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
                  *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = lVar8;
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
                }
                break;
              }
              plVar3 = plVar3 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          iVar7 = iVar7 + 1;
          if (iVar7 == 0x3c) {
            return;
          }
        } while( true );
      }
      *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
LAB_025b8708:
  *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
  return;
}

