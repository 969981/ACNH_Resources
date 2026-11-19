
undefined4 FUN_03c2f770(char *param_1,void *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong local_78 [2];
  int local_64;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    lVar8 = FUN_03c2fb70(local_78,param_2,param_3,0);
    uVar11 = 0;
    if (local_64 != 1) {
      uVar11 = local_78[0];
    }
    if (lVar8 != 0) {
      uVar11 = 0xfffffffffffffffe;
    }
    if (0xfffffffffffffffd < uVar11 || (int)uVar11 == -1) {
LAB_03c2f7f8:
      *param_1 = '\x03';
      return 0xffffffff;
    }
    plVar9 = *(long **)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = (int)uVar11;
    *(undefined4 *)(plVar9 + 0x507) = 0xc00000c;
    plVar9[0xe32] = 0x8000001;
    uVar7 = DAT_041e8f6c;
    uVar3 = DAT_041e8f64;
    *(undefined4 *)(plVar9 + 0xe22) = 0;
    *(undefined8 *)((long)plVar9 + 0x716c) = 0;
    *(undefined4 *)(plVar9 + 0xe39) = 0;
    *(undefined4 *)((long)plVar9 + 0x71d4) = 0;
    *(undefined4 *)(plVar9 + 0xe2a) = 0;
    *(undefined4 *)((long)plVar9 + 0x70a4) = 0;
    *(undefined4 *)(plVar9 + 0xe2d) = 0;
    plVar9[0xe29] = 0x271f8;
    plVar9[0xe2f] = (long)(plVar9 + 0x4e3f);
    *(undefined4 *)((long)plVar9 + 0x6844) = uVar7;
    *(undefined8 *)((long)plVar9 + 0x683c) = uVar3;
    plVar9[0xe0d] = 5;
    plVar9[0xe34] = 0;
    plVar9[0xe38] = 0;
    plVar9[0xe2b] = 0;
    plVar9[0xe2c] = 0;
    plVar9[0xe30] = 0;
    plVar9[0xe13] = 0;
    plVar9[0xe09] = 0;
    plVar9[0xe0a] = 0;
    plVar9[0xe0b] = 0;
    plVar9[0xe0c] = 0;
    plVar9[0xe15] = 0;
    *plVar9 = (long)(plVar9 + 4);
    plVar9[1] = (long)(plVar9 + 0x306);
    plVar9[2] = (long)(plVar9 + 0x205);
    plVar9[3] = (long)(plVar9 + 0x507);
    *(long **)(param_1 + 0x30) = plVar9;
    *param_1 = '\x02';
  }
  else {
    if (cVar1 == '\x03') {
      return 0xffffffff;
    }
    if (cVar1 == '\x04') {
      return 0xfffffffd;
    }
    plVar9 = *(long **)(param_1 + 0x30);
  }
joined_r0x03c2f914:
  do {
    if ((int)param_3 < 1) {
      lVar8 = plVar9[0xe0d];
joined_r0x03c2faa8:
      if (lVar8 == 0) {
        *param_1 = '\x04';
      }
      return *(undefined4 *)(param_1 + 0x14);
    }
    uVar11 = plVar9[0xe0d];
    if (0xffffffffffffff88 < uVar11) goto LAB_03c2f7f8;
    if (uVar11 == 0) {
      *param_1 = '\x03';
      return 0xfffffffd;
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    iVar10 = (int)uVar11;
    if (0 < (int)uVar6) {
      uVar2 = iVar10 - uVar6;
      if (uVar2 != 0 && (int)uVar6 <= iVar10) {
        if ((int)param_3 <= (int)uVar2) {
          uVar2 = param_3;
        }
        memcpy((void *)(*(long *)(param_1 + 0x20) + (ulong)uVar6),param_2,(long)(int)uVar2);
        param_2 = (void *)((long)param_2 + (long)(int)uVar2);
        param_3 = param_3 - uVar2;
        uVar6 = *(int *)(param_1 + 0x2c) + uVar2;
        *(uint *)(param_1 + 0x2c) = uVar6;
      }
      if (iVar10 <= (int)uVar6) {
        uVar5 = FUN_03c32470(plVar9,*(undefined8 *)(param_1 + 8),(long)*(int *)(param_1 + 0x10),
                             *(undefined8 *)(param_1 + 0x20),uVar11);
        if (0xffffffffffffff88 < uVar5) {
LAB_03c2fa54:
          *param_1 = '\x03';
          uVar7 = 0xfffffffe;
          if ((int)uVar5 != -0x46) {
            uVar7 = 0xffffffff;
          }
          return uVar7;
        }
        iVar4 = (int)uVar5;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)iVar4;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar4;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar4;
        iVar4 = iVar10;
        if (*(int *)(param_1 + 0x2c) - iVar10 != 0) {
          memcpy(*(void **)(param_1 + 0x20),(void *)(uVar11 + (long)*(void **)(param_1 + 0x20)),
                 (long)(*(int *)(param_1 + 0x2c) - iVar10));
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        *(int *)(param_1 + 0x2c) = iVar4 - iVar10;
      }
      goto joined_r0x03c2f914;
    }
    if ((int)param_3 < iVar10) {
      if (*(int *)(param_1 + 0x28) < iVar10) goto LAB_03c2f7f8;
      memcpy(*(void **)(param_1 + 0x20),param_2,(ulong)param_3);
      *(uint *)(param_1 + 0x2c) = param_3;
      lVar8 = plVar9[0xe0d];
      goto joined_r0x03c2faa8;
    }
    uVar5 = FUN_03c32470(plVar9,*(undefined8 *)(param_1 + 8),(long)*(int *)(param_1 + 0x10),param_2,
                         uVar11);
    if (0xffffffffffffff88 < uVar5) goto LAB_03c2fa54;
    param_2 = (void *)((long)param_2 + uVar11);
    iVar4 = (int)uVar5;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)iVar4;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar4;
    param_3 = param_3 - iVar10;
  } while( true );
}

