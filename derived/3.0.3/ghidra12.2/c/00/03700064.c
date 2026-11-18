
void FUN_03700064(undefined8 param_1,uint param_2,undefined2 *param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = (uint)(DAT_0545c458 != -1);
  if (DAT_0545c45c != -1) {
    uVar3 = uVar3 + 1;
  }
  if ((int)param_2 < (int)uVar3) {
    puVar1 = (uint *)(&DAT_0545c458 + param_2);
    if (1 < param_2) {
      puVar1 = (uint *)&DAT_0545c458;
    }
    uVar3 = *puVar1;
    if (uVar3 != 0xffffffff && (int)uVar3 < 0x10) {
      puVar4 = &DAT_0545b240 + (ulong)uVar3 * 0x118;
      if (0xf < uVar3) {
        puVar4 = &DAT_0545b240;
      }
      if (puVar4[0x8c] != '\0') {
        *(undefined2 *)(puVar4 + 0xac) = *param_3;
        puVar4[0xae] = *(undefined1 *)(param_3 + 1);
        puVar4[0xaf] = *(undefined1 *)((long)param_3 + 3);
        *(undefined4 *)(puVar4 + 0xb0) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)(puVar4 + 0xc0) = *(undefined4 *)(param_4 + 8);
        *(undefined4 *)(puVar4 + 0xc4) = *(undefined4 *)(param_4 + 0xc);
        uVar3 = DAT_0545c464;
        if (puVar4[0xc9] == '\0') {
          if (puVar4[0xca] == '\0') {
            return;
          }
          if ((DAT_0545c460 != 0xffffffff) && ((int)DAT_0545c460 < 0x10)) {
            puVar4 = &DAT_0545b240 + (ulong)DAT_0545c460 * 0x118;
            if (0xf < DAT_0545c460) {
              puVar4 = &DAT_0545b240;
            }
            if (puVar4[0x8c] != '\0') {
              *(undefined2 *)(puVar4 + 0xac) = *param_3;
              puVar4[0xae] = *(undefined1 *)(param_3 + 1);
              puVar4[0xaf] = *(undefined1 *)((long)param_3 + 3);
              *(undefined4 *)(puVar4 + 0xb0) = *(undefined4 *)(param_3 + 2);
              *(undefined4 *)(puVar4 + 0xc0) = *(undefined4 *)(param_4 + 8);
              *(undefined4 *)(puVar4 + 0xc4) = *(undefined4 *)(param_4 + 0xc);
            }
          }
          if (uVar3 == 0xffffffff) {
            return;
          }
          if (0xf < (int)uVar3) {
            return;
          }
          puVar4 = &DAT_0545b240 + (ulong)uVar3 * 0x118;
          if (0xf < uVar3) {
            puVar4 = &DAT_0545b240;
          }
          cVar2 = puVar4[0x8c];
        }
        else {
          puVar4 = &DAT_0545b9e8;
          cVar2 = DAT_0545ba74;
        }
        if (cVar2 != '\0') {
          *(undefined2 *)(puVar4 + 0xac) = *param_3;
          puVar4[0xae] = *(undefined1 *)(param_3 + 1);
          puVar4[0xaf] = *(undefined1 *)((long)param_3 + 3);
          *(undefined4 *)(puVar4 + 0xb0) = *(undefined4 *)(param_3 + 2);
          *(undefined4 *)(puVar4 + 0xc0) = *(undefined4 *)(param_4 + 8);
          *(undefined4 *)(puVar4 + 0xc4) = *(undefined4 *)(param_4 + 0xc);
          return;
        }
      }
    }
  }
  return;
}

