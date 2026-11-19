
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_03bbdecc(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x38);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_03bbe090;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
  }
  if (puVar4 == (undefined8 *)0x0) goto LAB_03bbe090;
  *(undefined4 *)(puVar4 + 2) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x14) = 0;
  *(undefined1 *)((long)puVar4 + 0x33) = 0;
  *puVar4 = &PTR_LAB_048f9700;
  puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
  *(undefined8 **)(param_1 + 200) = puVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    puVar4 = malloc(0x38);
joined_r0x03bbe074:
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar4 + 0x33) = 0;
      *(undefined1 *)((long)puVar4 + 0x14) = 0;
      *(undefined4 *)(puVar4 + 2) = 0x20;
      *puVar4 = &PTR_LAB_048f9700;
      puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
      lVar5 = *(long *)puVar1;
      *(undefined8 **)(param_1 + 0xd0) = puVar4;
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (lVar5 == 0) {
        puVar4 = malloc(0x38);
        if (puVar4 != (undefined8 *)0x0) goto LAB_03bbe048;
LAB_03bbe0a8:
        *(undefined8 *)(param_1 + 0xa0) = 0;
        if (*(long **)(param_1 + 200) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 200) + 8))();
        }
        *(undefined8 *)(param_1 + 200) = 0;
        if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xd0) + 8))();
        }
        *(undefined8 *)(param_1 + 0xd0) = 0;
      }
      else {
        plVar3 = param_2;
        if (param_2 == (long *)0x0) {
          lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar3 = (long *)(lVar5 + 8);
          if (lVar2 != 0) {
            plVar3 = (long *)(lVar2 + 0xa8);
          }
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_03bbe0a8;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
        if (puVar4 == (undefined8 *)0x0) goto LAB_03bbe0a8;
LAB_03bbe048:
        *(undefined1 *)((long)puVar4 + 0x33) = 0;
        *(undefined1 *)((long)puVar4 + 0x14) = 0;
        *(undefined4 *)(puVar4 + 2) = 0x20;
        *puVar4 = &PTR_LAB_048f9700;
        puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
        *(undefined8 **)(param_1 + 0xa0) = puVar4;
      }
      lVar5 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
      if (lVar5 == 0) {
        puVar4 = malloc(0x38);
joined_r0x03bbe2e4:
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined1 *)((long)puVar4 + 0x33) = 0;
          *(undefined1 *)((long)puVar4 + 0x14) = 0;
          *(undefined4 *)(puVar4 + 2) = 0x20;
          *puVar4 = &PTR_LAB_048f9700;
          puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
          lVar5 = *(long *)puVar1;
          *(undefined8 **)(param_1 + 0xa8) = puVar4;
          *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x70) = 0;
          if (lVar5 == 0) {
            puVar4 = malloc(0x38);
joined_r0x03bbe1b4:
            if (puVar4 != (undefined8 *)0x0) {
              *(undefined1 *)((long)puVar4 + 0x33) = 0;
              *(undefined1 *)((long)puVar4 + 0x14) = 0;
              *(undefined4 *)(puVar4 + 2) = 0x20;
              *puVar4 = &PTR_LAB_048f9700;
              puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
              lVar5 = *(long *)puVar1;
              *(undefined8 **)(param_1 + 0xb0) = puVar4;
              *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
              *(undefined8 *)(param_1 + 0x78) = 0;
              if (lVar5 == 0) {
                puVar4 = malloc(0x38);
joined_r0x03bbe31c:
                if (puVar4 != (undefined8 *)0x0) {
                  *(undefined1 *)((long)puVar4 + 0x33) = 0;
                  *(undefined1 *)((long)puVar4 + 0x14) = 0;
                  *(undefined4 *)(puVar4 + 2) = 0x20;
                  *puVar4 = &PTR_LAB_048f9700;
                  puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
                  lVar5 = *(long *)puVar1;
                  *(undefined8 **)(param_1 + 0xb8) = puVar4;
                  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
                  *(undefined8 *)(param_1 + 0x80) = 0;
                  if (lVar5 == 0) {
                    puVar4 = malloc(0x38);
joined_r0x03bbe38c:
                    if (puVar4 != (undefined8 *)0x0) {
                      *(undefined1 *)((long)puVar4 + 0x33) = 0;
                      *(undefined1 *)((long)puVar4 + 0x14) = 0;
                      *(undefined4 *)(puVar4 + 2) = 0x20;
                      *puVar4 = &PTR_LAB_048f9700;
                      puVar4[1] = (undefined1 *)((long)puVar4 + 0x14);
                      *(undefined8 **)(param_1 + 0xc0) = puVar4;
                      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
                      return 1;
                    }
                  }
                  else {
                    if (param_2 != (long *)0x0) {
LAB_03bbe294:
                      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x38,8);
                      goto joined_r0x03bbe38c;
                    }
                    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                    puVar4 = (undefined8 *)(lVar5 + 8);
                    if (lVar2 != 0) {
                      puVar4 = (undefined8 *)(lVar2 + 0xa8);
                    }
                    param_2 = (long *)*puVar4;
                    if (param_2 != (long *)0x0) goto LAB_03bbe294;
                  }
                  *(undefined8 *)(param_1 + 0xc0) = 0;
                  plVar3 = *(long **)(param_1 + 200);
                  goto joined_r0x03bbe328;
                }
              }
              else {
                plVar3 = param_2;
                if (param_2 != (long *)0x0) {
LAB_03bbe21c:
                  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
                  goto joined_r0x03bbe31c;
                }
                lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar3 = (long *)(lVar5 + 8);
                if (lVar2 != 0) {
                  plVar3 = (long *)(lVar2 + 0xa8);
                }
                plVar3 = (long *)*plVar3;
                if (plVar3 != (long *)0x0) goto LAB_03bbe21c;
              }
              *(undefined8 *)(param_1 + 0xb8) = 0;
              plVar3 = *(long **)(param_1 + 200);
              goto joined_r0x03bbe328;
            }
          }
          else {
            plVar3 = param_2;
            if (param_2 != (long *)0x0) {
LAB_03bbe1a0:
              puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
              goto joined_r0x03bbe1b4;
            }
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar3 = (long *)(lVar5 + 8);
            if (lVar2 != 0) {
              plVar3 = (long *)(lVar2 + 0xa8);
            }
            plVar3 = (long *)*plVar3;
            if (plVar3 != (long *)0x0) goto LAB_03bbe1a0;
          }
          *(undefined8 *)(param_1 + 0xb0) = 0;
          plVar3 = *(long **)(param_1 + 200);
          goto joined_r0x03bbe328;
        }
      }
      else {
        plVar3 = param_2;
        if (param_2 != (long *)0x0) {
LAB_03bbe124:
          puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
          goto joined_r0x03bbe2e4;
        }
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar5 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) goto LAB_03bbe124;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
      plVar3 = *(long **)(param_1 + 200);
joined_r0x03bbe328:
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined8 *)(param_1 + 200) = 0;
      if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xd0) + 8))();
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      return 0;
    }
  }
  else {
    plVar3 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03bbdfb8:
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
      goto joined_r0x03bbe074;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) goto LAB_03bbdfb8;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 200) + 8))();
  }
LAB_03bbe090:
  *(undefined8 *)(param_1 + 200) = 0;
  return 0;
}

