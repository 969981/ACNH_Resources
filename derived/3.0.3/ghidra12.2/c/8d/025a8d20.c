
void FUN_025a8d20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_04bb2268;
  if ((((*(long *)PTR_DAT_04bb2268 != 0) && (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0'))
      && (*(long *)(param_1 + 8) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 8) + 8), lVar3 != 0)) {
    lVar3 = FUN_03f29260(lVar3,0x200,0x18);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x28) = lVar3;
      lVar3 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        pvVar6 = malloc(0x1000);
      }
      else {
        plVar4 = *(long **)(*(long *)puVar2 + 0x28);
        if (plVar4 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar4 = (long *)(lVar3 + 8);
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_025a8d50;
        }
        pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1000,8);
      }
      if (pvVar6 != (void *)0x0) {
        iVar8 = 0;
        *(undefined8 *)(param_1 + 0x30) = 0x20000000000;
        *(void **)(param_1 + 0x38) = pvVar6;
        puVar2 = PTR_DAT_04bc3578;
        do {
          lVar5 = *(long *)(param_1 + 0x28);
          lVar3 = FUN_03f2a10c(0x18,**(undefined8 **)puVar2,1);
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x38);
            uVar7 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              plVar4 = *(long **)(lVar5 + 0x40);
              do {
                if (*plVar4 == 0) {
                  *plVar4 = lVar3;
                  goto LAB_025a8e80;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            lVar3 = 0;
          }
LAB_025a8e80:
          if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = lVar3;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          iVar8 = iVar8 + 1;
          if (iVar8 == 0x200) {
            return;
          }
        } while( true );
      }
      goto LAB_025a8d50;
    }
    *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_025a8d50:
  *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
  return;
}

