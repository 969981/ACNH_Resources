
void FUN_0099f500(long param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  void *__dest;
  undefined8 local_118;
  char local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined8 local_48;
  
  if ((ulong)*param_2 < 8) {
    puVar1 = (undefined4 *)(param_1 + 0x278);
    *(undefined1 *)((long)puVar1 + (ulong)*param_2 * 0x1a0 + 0x19a) = 1;
    bVar4 = *param_2;
    bVar5 = 7 < bVar4;
    if (bVar5) {
      bVar4 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar4 * 0x68;
    if (bVar5) {
      puVar3 = puVar1;
    }
    puVar3[3] = DAT_04c9a0c8;
    local_118 = 0xfffe;
    FUN_0277d4ac(&local_118);
    lVar6 = 0;
    __dest = *(void **)(puVar3 + 0x12);
    local_d4[0] = '\0';
    local_48 = 0;
    local_50 = 7;
    uStack_4c = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *puVar3 = (undefined4)local_118;
    puVar3[1] = local_118._4_4_;
    puVar3[0xe] = 0;
    local_55 = 0;
    *(undefined8 *)(puVar3 + 4) = 0xffffffff00000000;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 8) = 0x3f80000000000000;
    *(undefined8 *)(puVar3 + 10) = 0;
    do {
      if (local_d4[lVar6] == '\0') goto LAB_0099f60c;
      if (local_d4[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0099f60c;
      }
      if (local_d4[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0099f60c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0099f60c:
    iVar2 = (int)lVar6;
    if ((int)puVar3[0x14] <= (int)lVar6) {
      iVar2 = puVar3[0x14] + -1;
    }
    memcpy(__dest,local_d4,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    *(ulong *)(puVar3 + 0x36) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    *(undefined8 *)(puVar3 + 0x38) = local_48;
  }
  return;
}

