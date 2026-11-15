
void FUN_01fa41d8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float local_3c [3];
  
  if (((4 < *(int *)(param_1 + 0x77b0) - 3U) && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0)) &&
     (*(int *)(param_1 + 0xaf8c) != 8)) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    uVar1 = *(uint *)(lVar5 + 0x2b4);
    uVar6 = (ulong)(uVar1 >> 0x14) & 0xff0;
    local_3c[1] = 0.0;
    fVar7 = (float)(uVar1 & 0xffffff) * 5.9604645e-08;
    local_3c[0] = *(float *)((long)&DAT_04199798 + uVar6) +
                  fVar7 * *(float *)((long)&DAT_0419979c + uVar6);
    local_3c[2] = *(float *)((long)&DAT_041997a0 + uVar6) +
                  fVar7 * *(float *)((long)&DAT_041997a4 + uVar6);
    uVar6 = FUN_01ffc810(param_1 + 0xe728,param_2,lVar5 + 0x278,local_3c,0);
    lVar5 = DAT_05abbc58;
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(DAT_05abbc58 + 0x121c) = *param_2;
      *(undefined4 *)(lVar5 + 0x1220) = param_2[1];
      *(undefined4 *)(lVar5 + 0x1224) = param_2[2];
      if ((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) {
        if (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13) {
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13) {
            plVar4 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
            uVar6 = (**(code **)(*plVar4 + 0x100))();
            puVar2 = PTR_DAT_04bb3238;
            if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0xaf9c) == '\0')) {
              *(undefined4 *)(param_1 + 0xafa0) = 0xe;
              *(undefined1 *)(param_1 + 0xaf9c) = 1;
              *(undefined4 *)(param_1 + 0xafa4) = *(undefined4 *)puVar2;
              *(undefined2 *)(param_1 + 0xafa8) = DAT_05586008;
              *(undefined1 *)(param_1 + 0xafaa) = DAT_0558600a;
              *(undefined1 *)(param_1 + 0xafab) = DAT_0558600b;
              uVar3 = DAT_0558600c;
              *(undefined1 *)(param_1 + 0xaf98) = 0;
              *(undefined4 *)(param_1 + 0xafac) = uVar3;
              *(undefined1 *)(param_1 + 0xaf90) = 0;
            }
          }
        }
      }
    }
  }
  return;
}

