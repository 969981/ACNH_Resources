
/* WARNING: Removing unreachable block (ram,0x02caf428) */

void FUN_02caf340(long param_1,uint param_2,byte *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  lVar3 = param_1 + (ulong)*param_3 * 800 + 0x220;
  if (7 < *param_3) {
    lVar3 = param_1 + 0x1b20;
  }
  local_34 = param_2;
  if (((DAT_05665998 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05665998), iVar4 != 0)) {
    DAT_056658d8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056658e0 = &DAT_040a049e;
    DAT_056658f0 = &DAT_0406c2cf;
    DAT_05665910 = &DAT_040d60e1;
    DAT_05665920 = &DAT_040affe1;
    DAT_05665900 = &DAT_04080da4;
    DAT_05665940 = &DAT_040aae8a;
    DAT_05665930 = &DAT_040d97a2;
    DAT_05665950 = &DAT_040e5e0f;
    DAT_05665960 = &DAT_04097e6c;
    DAT_05665970 = &DAT_04100084;
    DAT_05665980 = &DAT_040db547;
    DAT_05665990 = &DAT_040bc41b;
    DAT_056658e8 = DAT_056658d8;
    DAT_056658f8 = DAT_056658d8;
    DAT_05665908 = DAT_056658d8;
    DAT_05665918 = DAT_056658d8;
    DAT_05665928 = DAT_056658d8;
    DAT_05665938 = DAT_056658d8;
    DAT_05665948 = DAT_056658d8;
    DAT_05665958 = DAT_056658d8;
    DAT_05665968 = DAT_056658d8;
    DAT_05665978 = DAT_056658d8;
    DAT_05665988 = DAT_056658d8;
    __cxa_guard_release(&DAT_05665998);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "ETC_ChatBalloon";
  uVar2 = local_34;
  if (0xb < local_34) {
    uVar2 = 0;
  }
  local_48 = puVar1;
  (**(code **)((long)(&DAT_056658d8)[(long)(int)uVar2 * 2] + 0x18))
            (&DAT_056658d8 + (long)(int)uVar2 * 2);
  uStack_50 = (&DAT_056658e0)[(long)(int)uVar2 * 2];
  local_58 = puVar1;
  FUN_006f50a0(lVar3,&local_48,&local_58,0);
  bVar5 = *param_3;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(lVar3 + 0x2f4) = bVar5;
  *(undefined4 *)(lVar3 + 0x300) = 4;
  *(undefined4 *)(lVar3 + 0x2f8) = DAT_04180230;
  *(undefined4 *)(lVar3 + 0x2fc) = 0;
  *(uint *)(lVar3 + 0x30c) = *(uint *)(lVar3 + 0x30c) & 0xffffffdf | 1;
  return;
}

