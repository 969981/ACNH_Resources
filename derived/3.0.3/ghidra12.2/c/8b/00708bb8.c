
void FUN_00708bb8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  float local_30;
  float fStack_2c;
  float local_28;
  
  lVar3 = DAT_04cfae30;
  if (((((DAT_04cfae30 != 0) && ((*(byte *)(param_1 + 0x178) & 1) != 0)) &&
       ((**(code **)(**(long **)(param_1 + 0x278) + 0x60))(), *(char *)(param_1 + 0x289) != '\0'))
      && ((FUN_0097e550(lVar3 + 8,*(undefined8 *)(param_1 + 0x278)),
          (*(byte *)(*(long *)(param_1 + 0x278) + 0x18) >> 1 & 1) != 0 &&
          (*(char *)(param_1 + 0x288) != '\0')))) &&
     ((*(long *)(param_1 + 0x48) != 0 &&
      (plVar1 = *(long **)(*(long *)(param_1 + 0x48) + 0x68),
      plVar1 = (long *)(**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined4 *)(param_1 + 0x284)),
      plVar1 != (long *)0x0)))) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x130))();
    lVar3 = *(long *)(param_1 + 0x278);
    local_30 = (float)*puVar2;
    fStack_2c = (float)((ulong)*puVar2 >> 0x20);
    local_30 = local_30 + *(float *)(lVar3 + 0x1c);
    fStack_2c = fStack_2c + *(float *)(lVar3 + 0x20);
    local_28 = *(float *)(puVar2 + 1) + *(float *)(lVar3 + 0x24);
    if (((!NAN(local_30)) && (!NAN(fStack_2c))) && (!NAN(local_28))) {
      if ((*(long *)(param_1 + 0x48) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0xa0), lVar4 == 0)) {
        (**(code **)(*plVar1 + 0x128))(plVar1,&local_30);
      }
      else {
        *(float *)(lVar4 + 0x5078) = *(float *)(lVar3 + 0x1c);
        *(undefined4 *)(lVar4 + 0x507c) = *(undefined4 *)(lVar3 + 0x20);
        *(undefined4 *)(lVar4 + 0x5080) = *(undefined4 *)(lVar3 + 0x24);
      }
    }
  }
  return;
}

