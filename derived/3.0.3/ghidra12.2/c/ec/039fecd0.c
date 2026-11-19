
void FUN_039fecd0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  void *__dest;
  void *__src;
  uint uVar6;
  long local_890;
  undefined8 local_888;
  undefined *local_478;
  undefined1 *local_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  puVar4 = PTR_PTR_04bb2238;
  uVar6 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x98 + ((long)((ulong)uVar6 << 0x20) >> 0x1a));
    *puVar1 = 0;
    __dest = *(void **)(puVar1 + 0x10);
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    __src = *(void **)(puVar4 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(puVar4 + 8) + lVar5) == '\0') goto LAB_039fed14;
        lVar2 = *(long *)(puVar4 + 8) + lVar5;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_039fed14;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_039fed14;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_039fed14:
      iVar3 = (int)lVar5;
      if (*(int *)(puVar1 + 0x18) <= (int)lVar5) {
        iVar3 = *(int *)(puVar1 + 0x18) + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 8) {
      if (param_3 != 0) {
        local_65 = 0;
        local_468 = 0x400;
        local_470 = local_464;
        local_464[0] = 0;
        local_478 = PTR_DAT_04bb2f40 + 0x10;
        FUN_006e9454(&local_890,"top\\top_%s","resource");
        (**(code **)(local_890 + 0x18))(&local_890);
        FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_888);
      }
      return;
    }
  } while( true );
}

