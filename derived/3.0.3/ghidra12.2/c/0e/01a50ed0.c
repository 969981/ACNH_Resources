
float FUN_01a50ed0(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *__s;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  char cVar9;
  undefined1 local_a4 [8];
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  int local_64;
  
  local_80 = (uint *)0x0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = local_88;
  FUN_0277f02c(param_2,&local_90);
  local_98 = 0;
  local_9c = ((float)((int)local_80 + *(int *)(param_3 + 8)) * 5.0 +
             (float)((int)local_70 + *(int *)(param_3 + 8)) * 5.0 + 5.0) * 0.5;
  local_94 = ((float)(local_80._4_4_ + *(int *)(param_3 + 0xc)) * 5.0 +
             (float)(local_70._4_4_ + *(int *)(param_3 + 0xc)) * 5.0 + 5.0) * 0.5;
  if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
     (local_98 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_9c,0), param_4 == 1)) {
    FUN_01a5033c(local_a4,local_98,local_98,param_1,0,param_3,0);
    puVar2 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(local_a4);
    if (*(long *)puVar2 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar4 = FUN_0277e294(local_a4), (uVar4 & 1) != 0)) &&
         (uVar4 = FUN_0277e158(local_a4), (uVar4 & 1) == 0)) {
        lVar8 = *(long *)puVar2;
        local_80 = (uint *)0x0;
        local_90 = PTR_DAT_04bc0510 + 0x10;
        uVar3 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(local_a4);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
               puVar5 != (uint *)0x0)) {
              local_80 = puVar5;
            }
          }
        }
        local_64 = FUN_01ae7550(&local_90);
        puVar5 = local_80;
        __s = PTR_DAT_04bbfe90;
        puVar2 = PTR_DAT_04bbfe88;
        if (((local_64 - 1U < 6) && (local_80 != (uint *)0x0)) && (uVar3 = *local_80, uVar3 != 0)) {
          cVar9 = *PTR_DAT_04bbfe88;
          while( true ) {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *puVar2 = 1;
              memset(__s,0xff,0x1ac);
              uVar3 = *puVar5;
            }
            else {
              if (-1 < *(int *)(__s + 0xf0)) {
                return local_9c;
              }
              if (*(int *)(__s + 0xf0) != -1) {
                return local_9c;
              }
            }
            puVar6 = (uint *)(ulong)uVar3;
            if (puVar6 == (uint *)0x0) {
              return local_9c;
            }
            if (puVar5 == puVar6) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar5 + (10 - (long)puVar6)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar5 + (lVar8 - (long)puVar6);
            if (lVar8 == 0) {
              return local_9c;
            }
            uVar4 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar6));
            *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
            if (uVar4 == 0) {
              return local_9c;
            }
            piVar7 = (int *)(lVar8 + 4);
            while (piVar7[-1] != -0x499d99d4) {
              piVar7 = piVar7 + 2;
              uVar4 = uVar4 - 1;
              if (uVar4 == 0) {
                return local_9c;
              }
            }
            iVar1 = 0;
            if (*piVar7 != -1) {
              iVar1 = *piVar7;
            }
            *(int *)(__s + 0xf0) = iVar1;
            uVar3 = *puVar5;
            if (uVar3 == 0) {
              return local_9c;
            }
          }
          return local_9c;
        }
      }
    }
  }
  return local_9c;
}

