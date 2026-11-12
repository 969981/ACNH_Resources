
void FUN_009a4550(long param_1,byte *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  void *__dest;
  char local_b4 [127];
  undefined1 local_35;
  
  puVar4 = PTR_DAT_04bb37e0;
  bVar7 = *param_2;
  puVar1 = (undefined2 *)(param_1 + 0x1a8);
  lVar6 = 0;
  local_b4[0] = '\0';
  local_35 = 0;
  bVar5 = 7 < bVar7;
  if (bVar5) {
    bVar7 = 0xff;
  }
  puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar7 * 0x58;
  if (bVar5) {
    puVar3 = puVar1;
  }
  *puVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(puVar3 + 1) = puVar4[2];
  *(undefined *)((long)puVar3 + 3) = puVar4[3];
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 4);
  bVar7 = *param_2;
  bVar5 = 7 < bVar7;
  if (bVar5) {
    bVar7 = 0xff;
  }
  puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar7 * 0x58;
  if (bVar5) {
    puVar3 = puVar1;
  }
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined4 *)(puVar3 + 0x54) = 0;
  bVar7 = *param_2;
  bVar5 = 7 < bVar7;
  if (bVar5) {
    bVar7 = 0xff;
  }
  puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar7 * 0x58;
  if (bVar5) {
    puVar3 = puVar1;
  }
  __dest = *(void **)(puVar3 + 8);
  do {
    if (local_b4[lVar6] == '\0') goto LAB_009a4650;
    if (local_b4[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009a4650;
    }
    if (local_b4[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_009a4650;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_009a4650:
  iVar2 = (int)lVar6;
  if (*(int *)(puVar3 + 0xc) <= (int)lVar6) {
    iVar2 = *(int *)(puVar3 + 0xc) + -1;
  }
  memcpy(__dest,local_b4,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  bVar7 = *param_2;
  bVar5 = 7 < bVar7;
  if (bVar5) {
    bVar7 = 0xff;
  }
  puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar7 * 0x58;
  if (bVar5) {
    puVar3 = puVar1;
  }
  bVar7 = DAT_0548e140;
  if (7 < DAT_0548e140) {
    bVar7 = 0xff;
  }
  *(byte *)(puVar3 + 0x56) = bVar7;
  return;
}

