
void FUN_03a8c7e8(long param_1,uint param_2)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    param_2 = 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar3 = lVar4 + (long)(int)param_2 * 0x1d80;
    *(uint *)(lVar3 + 0x1d68) = *(uint *)(lVar3 + 0x1d68) & 0xfffffffe;
  }
  puVar2 = PTR_DAT_04bbd510;
  pcVar1 = (char *)(lVar4 + (long)(int)param_2 * 0x1d80 + 0x1334);
  if (*pcVar1 != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                 *(undefined8 *)(lVar4 + (long)(int)param_2 * 0x1d80 + 0xff0));
  }
  *pcVar1 = '\0';
  lVar3 = lVar4 + (long)(int)param_2 * 0x1d80;
  *(undefined8 *)(lVar3 + 0xff0) = 0;
  *(undefined1 *)(lVar3 + 0x1335) = 0;
  if (*(char *)(lVar3 + 0xfe4) != '\0') {
    FUN_039499cc(*(undefined8 *)puVar2,*(undefined8 *)(lVar4 + (long)(int)param_2 * 0x1d80 + 0xca0))
    ;
  }
  *(undefined1 *)(lVar3 + 0xfe4) = 0;
  lVar3 = lVar4 + (long)(int)param_2 * 0x1d80;
  *(undefined8 *)(lVar3 + 0xca0) = 0;
  *(undefined1 *)(lVar3 + 0xfe5) = 0;
  if (*(char *)(lVar3 + 0x1684) != '\0') {
    FUN_039499cc(*(undefined8 *)puVar2,*(undefined8 *)(lVar4 + (long)(int)param_2 * 0x1d80 + 0x1340)
                );
  }
  *(char *)(lVar3 + 0x1684) = '\0';
  lVar3 = lVar4 + (long)(int)param_2 * 0x1d80;
  *(undefined8 *)(lVar3 + 0x1340) = 0;
  *(undefined1 *)(lVar3 + 0x1685) = 0;
  if ((*(byte *)(param_1 + 0x20) >> 3 & 1) != 0) {
    lVar3 = lVar4 + (long)(int)param_2 * 0x1d80;
    if (*(char *)(lVar3 + 0x5f4) != '\0') {
      FUN_039499cc(*(undefined8 *)puVar2,
                   *(undefined8 *)(lVar4 + (long)(int)param_2 * 0x1d80 + 0x2b0));
    }
    *(undefined1 *)(lVar3 + 0x5f4) = 0;
    lVar4 = lVar4 + (long)(int)param_2 * 0x1d80;
    *(undefined8 *)(lVar4 + 0x2b0) = 0;
    *(undefined1 *)(lVar4 + 0x5f5) = 0;
  }
  return;
}

