
void FUN_03603800(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_DAT_04bdf328;
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x140 + uVar5 * 8);
      FUN_036026d4(lVar6 + 0xec0);
      local_68 = *(undefined8 *)puVar3;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      local_78 = 0;
      uStack_70 = 0x1e;
      local_60 = 0;
      iVar4 = FUN_03605e64(&local_78,0,&DAT_0407ebb1,0);
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)UndefinedInstructionException(0x8002,0x360399c);
        (*pcVar2)();
      }
      if ((*(byte *)(lVar6 + 0x38) & 1) != 0) {
        (**(code **)(**(long **)(lVar6 + 0x40) + 0x18))
                  (*(long **)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar6 + 0x30) = local_78;
      *(undefined8 *)(lVar6 + 0x38) = uStack_70;
      *(undefined8 *)(lVar6 + 0x50) = uStack_58;
      *(undefined8 *)(lVar6 + 0x40) = local_68;
      *(undefined8 *)(lVar6 + 0x48) = local_60;
      *(undefined4 *)(lVar6 + 0x18) = 0;
    } while (uVar5 < *(byte *)(param_1 + 0x138));
  }
  puVar1 = (undefined8 *)(param_1 + 0x48);
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (1 < *(byte *)(param_1 + 0x138)) {
    lVar6 = *(long *)(param_1 + 0x140);
    *(undefined8 *)(lVar6 + 0x3fa8) = 0;
    *(undefined1 *)(lVar6 + 0x264c) = 0;
    lVar6 = *(long *)(param_1 + 0x148);
    *(undefined1 *)(lVar6 + 0x264c) = 0;
    *(undefined8 *)(lVar6 + 0x3fa8) = 0;
    lVar6 = *(long *)(param_1 + 0x140);
    *(undefined8 *)(lVar6 + 0x40d8) = 0;
    *(undefined1 *)(lVar6 + 0x40d2) = 0;
    lVar6 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(lVar6 + 0x40d8) = 0;
    *(undefined1 *)(lVar6 + 0x40d2) = 0;
    lVar6 = *(long *)(param_1 + 0x140);
    if (*(int *)(lVar6 + 0xf68) == 7) {
      *(undefined8 *)(lVar6 + 0xf80) = 0;
      *(undefined1 *)(lVar6 + 0xf7a) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x148);
    if (*(int *)(lVar6 + 0xf68) == 7) {
      *(undefined8 *)(lVar6 + 0xf80) = 0;
      *(undefined1 *)(lVar6 + 0xf7a) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x140);
    *(undefined8 *)(lVar6 + 0x4108) = 0;
    *(undefined1 *)(lVar6 + 0x4100) = 0;
    lVar6 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(lVar6 + 0x4108) = 0;
    *(undefined1 *)(lVar6 + 0x4100) = 0;
  }
  return;
}

