
void FUN_003d6560(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_68 [40];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2341));
  if (param_1[0x1f] == 0) {
    memcpy(param_1 + 0x22ce,param_2,0x2d8);
    *(undefined1 *)(param_1 + 0x2329) = 1;
    goto LAB_003d6878;
  }
  if ((char)param_1[0x1b] == '\0') goto LAB_003d6878;
  param_1[0x48] = *(long *)(param_2 + 0xb4);
  FUN_003dd6ec(auStack_68);
  FUN_003dd748(auStack_68,param_1[0x48]);
  uVar3 = FUN_003d6898(param_1,auStack_68);
  if ((uVar3 & 1) != 0) {
    uVar6 = param_2[5];
    if (uVar6 == 0) {
      uVar6 = (uint)param_2[4] / 5;
    }
    *(uint *)(param_1 + 0x25) = uVar6;
    *(bool *)((long)param_1 + 0xe2) = 0 < (int)uVar6;
    *(undefined4 *)(param_1 + 0x23) = *param_2;
    param_1[0x24] = *(long *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x2210) = param_2[6];
    lVar7 = param_1[0x1f];
    uVar4 = *(undefined8 *)(param_2 + 10);
    plVar8 = param_1 + 0x27;
    *(undefined8 *)(lVar7 + 0x348) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar7 + 0x350) = uVar4;
    *(long **)(param_1[0x1f] + 0x20) = param_1;
    *(long **)(param_1[0x1f] + 0x30) = plVar8;
    *(uint *)(param_1[0x1f] + 0x38) = (uint)*(byte *)((long)param_1 + 0x12e);
    *(int *)(param_1[0x1f] + 0x3c) = (int)param_1[0x26];
    *(undefined1 *)(param_1[0x1f] + 0x59) = *(undefined1 *)((long)param_1 + 0x12f);
    (**(code **)(*param_1 + 0x38))(param_1,1);
    uVar3 = FUN_003dd834(auStack_68);
    if ((uVar3 & 1) == 0) {
LAB_003d66bc:
      if ((char)param_1[0x28] == '\0') {
        if ((int)param_1[0x23] == 1) {
          uVar3 = (ulong)(param_1[0x24] * (long)*(int *)((long)param_1 + 0x13c)) / 1000;
          if (0xfffffffe < uVar3) {
            uVar3 = 0xffffffff;
          }
        }
        else if ((int)param_1[0x23] == 0) {
          uVar3 = param_1[0x24];
        }
        else {
          uVar3 = 0;
        }
        if ((ulong)param_1[0x2a] <= uVar3) {
          *(undefined1 *)((long)param_1 + 0x3b) = 1;
          (**(code **)(*param_1 + 0x28))(param_1);
          goto LAB_003d6870;
        }
      }
      FUN_003d8950(param_1,plVar8);
      if ((ulong)param_1[0x2f] < 0x2001) {
        uVar3 = param_1[0x2f] + 0x900;
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = (uint)(*(ulong *)(param_1[0x20] + 0x10) / uVar3);
        }
        *(uint *)(param_1 + 0x21) = uVar6;
        if (1 < (int)uVar6) {
          if (0x20 < uVar6) {
            *(undefined4 *)(param_1 + 0x21) = 0x20;
          }
          *(undefined4 *)((long)param_1 + 0x114) = 0;
          *(undefined8 *)((long)param_1 + 0x10c) = 0;
          puVar1 = PTR_FUN_04bd0490;
          if (0 < (int)param_1[0x8d]) {
            lVar7 = 0;
            plVar8 = param_1 + 0x90;
LAB_003d67d0:
            uVar4 = FUN_003cb1d8();
            lVar5 = FUN_003cb460(uVar4,1,0xff,puVar1,plVar8);
            if (lVar5 != 0) goto code_r0x003d67ec;
            if (lVar7 != 0) {
              plVar8 = param_1 + 0x91;
              do {
                if (*plVar8 != 0) {
                  FUN_003c0ba0();
                  *plVar8 = 0;
                }
                lVar7 = lVar7 + -1;
                plVar8 = plVar8 + 0x210;
              } while (lVar7 != 0);
            }
            FUN_003d5fe0(param_1);
            goto LAB_003d6870;
          }
LAB_003d6804:
          *(undefined1 *)((long)param_1 + 0xdb) = 1;
          FUN_003d6aa0(param_1,auStack_68);
        }
      }
    }
    else {
      bVar2 = FUN_003dd85c(auStack_68);
      *(byte *)((long)param_1 + 0x169) = bVar2 & 1;
      if ((param_1[0x1f] != 0) &&
         (uVar3 = FUN_003dbd14(param_1[0x1f] + 0x340,auStack_68,plVar8), (uVar3 & 1) != 0)) {
        uVar3 = FUN_003dc154(param_1[0x1f] + 0x340);
        if ((uVar3 & 1) != 0) goto LAB_003d66bc;
        (**(code **)(*param_1 + 0x38))(param_1,0);
      }
    }
  }
LAB_003d6870:
  FUN_003dd708(auStack_68);
LAB_003d6878:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2341));
  return;
code_r0x003d67ec:
  plVar8[1] = lVar5;
  lVar7 = lVar7 + 1;
  plVar8 = plVar8 + 0x210;
  if ((int)param_1[0x8d] <= lVar7) goto LAB_003d6804;
  goto LAB_003d67d0;
}

