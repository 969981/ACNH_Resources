
void FUN_01e2a2b0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb27d0;
  piVar4 = (int *)(param_1 + 0x20c);
  lVar5 = 0;
  if ((param_2 & 1) == 0) {
    puVar3 = &DAT_053fe348;
    do {
      if (0 < *piVar4) {
        if ((((uint)lVar5 < 10) && (puVar3[0xaf9] != '\0')) &&
           (uVar1 = FUN_0219e890(puVar3), (uVar1 & 1) != 0)) {
          if (*(int *)(*(long *)(*(long *)puVar2 + 0x10) + 0xc0) == 0) {
            if (*(char *)(param_1 + 0x208) != '\0') {
              if (*piVar4 < 2) goto LAB_01e2a3c0;
              if (*piVar4 == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x234) != '\0') {
              if (piVar4[0xb] < 2) goto LAB_01e2a3c0;
              if (piVar4[0xb] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x260) != '\0') {
              if (piVar4[0x16] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x16] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x28c) != '\0') {
              if (piVar4[0x21] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x21] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x2b8) != '\0') {
              if (piVar4[0x2c] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x2c] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x2e4) != '\0') {
              if (piVar4[0x37] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x37] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x310) != '\0') {
              if (piVar4[0x42] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x42] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x33c) != '\0') {
              if (piVar4[0x4d] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x4d] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x368) != '\0') {
              if (piVar4[0x58] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x58] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x394) != '\0') {
              if (piVar4[99] < 2) goto LAB_01e2a3c0;
              if (piVar4[99] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x3c0) != '\0') {
              if (piVar4[0x6e] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x6e] == 3) goto LAB_01e2a380;
            }
            if (*(char *)(param_1 + 0x3ec) != '\0') {
              if (piVar4[0x79] < 2) goto LAB_01e2a3c0;
              if (piVar4[0x79] == 3) goto LAB_01e2a380;
            }
            FUN_01e32928(param_1,puVar3 + 0x508);
          }
          else {
LAB_01e2a380:
            puVar3[0x631] = 0;
            *(undefined8 *)(puVar3 + 0x620) = 0;
            *(undefined8 *)(puVar3 + 0x628) = 0;
            local_44 = 1;
            FUN_01e2caf8(param_1,puVar3 + 0x508,0,&local_44,0,0);
          }
        }
        local_44 = (uint)lVar5;
        FUN_01e32bfc(param_1,&local_44);
      }
LAB_01e2a3c0:
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 0xba0;
      piVar4 = piVar4 + 1;
    } while (lVar5 != 10);
  }
  else {
    puVar2 = &DAT_053fe348;
    do {
      if (0 < piVar4[lVar5]) {
        if ((((uint)lVar5 < 10) && (puVar2[0xaf9] != '\0')) &&
           (uVar1 = FUN_0219e890(puVar2), (uVar1 & 1) != 0)) {
          puVar2[0x631] = 0;
          *(undefined8 *)(puVar2 + 0x620) = 0;
          *(undefined8 *)(puVar2 + 0x628) = 0;
          local_44 = 1;
          FUN_01e2caf8(param_1,puVar2 + 0x508,0,&local_44,0,0);
        }
        local_44 = (uint)lVar5;
        FUN_01e32bfc(param_1,&local_44);
      }
      lVar5 = lVar5 + 1;
      puVar2 = puVar2 + 0xba0;
    } while (lVar5 != 10);
  }
  return;
}

