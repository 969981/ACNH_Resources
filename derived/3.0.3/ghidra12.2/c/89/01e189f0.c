
void FUN_01e189f0(long *param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  void *__ptr;
  long lVar8;
  long lVar9;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 != 0) {
    lVar8 = param_1[1];
    lVar9 = (long)param_2 << 3;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar7 = (long *)*param_3;
      lVar6 = *param_1;
      if (*plVar7 == *(long *)(lVar6 + 0x10)) {
        __ptr = (void *)plVar7[0x1f5];
        if (__ptr == (void *)0x0) {
          lVar6 = *(long *)puVar2;
          if (lVar6 == 0) {
            __ptr = malloc(0x558);
          }
          else {
            plVar3 = *(long **)(lVar8 + 0x70);
            if (plVar3 == (long *)0x0) {
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar3 = (long *)(lVar6 + 8);
              if (lVar4 != 0) {
                plVar3 = (long *)(lVar4 + 0xa8);
              }
              plVar3 = (long *)*plVar3;
              if (plVar3 == (long *)0x0) {
                __ptr = (void *)0x0;
                goto LAB_01e18ae0;
              }
            }
            __ptr = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x558,8);
          }
LAB_01e18ae0:
          *(undefined4 *)((long)__ptr + 0xb5) = 0;
          *(undefined8 *)((long)__ptr + 0xad) = 0;
          *(undefined8 *)((long)__ptr + 0xa5) = 0;
          *(undefined8 *)((long)__ptr + 0x9d) = 0;
          *(undefined8 *)((long)__ptr + 0x95) = 0;
          *(undefined8 *)((long)__ptr + 0x8d) = 0;
          *(undefined8 *)((long)__ptr + 0x85) = 0;
          *(undefined8 *)((long)__ptr + 0x7d) = 0;
          *(undefined8 *)((long)__ptr + 0x75) = 0;
          *(undefined8 *)((long)__ptr + 0x6d) = 0;
          *(undefined8 *)((long)__ptr + 0x65) = 0;
          *(undefined8 *)((long)__ptr + 0x5d) = 0;
          *(undefined8 *)((long)__ptr + 0x55) = 0;
          *(undefined8 *)((long)__ptr + 0x4d) = 0;
          *(undefined8 *)((long)__ptr + 0x45) = 0;
          *(undefined8 *)((long)__ptr + 0x3d) = 0;
          *(undefined8 *)((long)__ptr + 0x35) = 0;
          *(undefined8 *)((long)__ptr + 0x2d) = 0;
          memset((void *)((long)__ptr + 0x141),0,0x408);
          lVar6 = *param_1;
        }
        if (*(long *)(*(long *)(lVar6 + 0xfb8) + 0x18) != 0) {
          FUN_00699eb4(&local_70,*(undefined8 *)(*(long *)(lVar6 + 0xfb8) + 0x10));
          uVar5 = FUN_0069aa28(&local_70);
          if ((uVar5 & 1) != 0) {
            puStack_78 = &DAT_0409f795;
            local_80 = puVar1;
            uVar5 = FUN_01d2efa4(&local_80,__ptr,&local_70);
            if ((uVar5 & 1) != 0) {
              plVar7[0x1f5] = (long)__ptr;
              *(undefined2 *)(plVar7 + 0x1f6) = 0x101;
              lVar6 = *(long *)(lVar8 + 0xb8);
              if (lVar6 != 0) {
                lStack_68 = (long)plVar7 + 0x8c;
                local_70 = PTR_DAT_04bb2020 + 0x10;
                FUN_01e18c10(lVar6,&local_70,plVar7 + 0xe,__ptr);
              }
              goto LAB_01e18a54;
            }
          }
        }
        lVar6 = *(long *)puVar2;
        if (lVar6 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(lVar6,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
        *(undefined2 *)(plVar7 + 0x1f6) = 1;
      }
LAB_01e18a54:
      param_3 = param_3 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}

