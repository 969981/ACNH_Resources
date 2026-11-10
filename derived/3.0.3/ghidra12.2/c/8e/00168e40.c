
int FUN_00168e40(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  char cVar15;
  size_t __n;
  size_t *psVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  ulong local_78;
  undefined8 local_70;
  uint5 local_68;
  undefined3 uStack_63;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return -0x20b;
  }
  if ((char)param_1[0x8a] == '\0') {
LAB_00168ed8:
    if (param_4 != 0) {
      lVar18 = 0;
      do {
        puVar13 = (undefined8 *)(param_3 + lVar18 * 0x28);
        lVar8 = param_1[4];
        __n = puVar13[2];
        pbVar4 = (byte *)*puVar13;
        uVar7 = FUN_0016a010(pbVar4,__n);
        uVar2 = (uint)uVar7;
        uVar5 = uVar7 & 0xffffffff;
        if (uVar2 == 0xffffffff) {
          uVar19 = 0x811c9dc5;
          if (__n != 0) {
            pbVar9 = pbVar4;
            sVar6 = __n;
            do {
              sVar6 = sVar6 - 1;
              uVar19 = (uVar19 ^ *pbVar9) * 0x1000193;
              pbVar9 = pbVar9 + 1;
            } while (sVar6 != 0);
            goto LAB_00168f98;
          }
LAB_00168fc0:
          if ((*(byte *)(param_3 + lVar18 * 0x28 + 0x20) & 1) != 0) goto LAB_00169014;
          if ((uVar2 < 0x37) && ((1L << (uVar7 & 0x3f) & 0x40218208100008U) != 0)) {
            cVar15 = '\x01';
          }
          else {
            cVar15 = (ulong)(param_1[6] * 3) >> 2 <
                     __n + *(long *)(param_3 + lVar18 * 0x28 + 0x18) + 0x20;
          }
        }
        else {
          if (uVar2 < 0x3d) {
            uVar19 = *(uint *)(&DAT_048368a4 + uVar5 * 0x80);
          }
          else {
            uVar19 = 0;
          }
LAB_00168f98:
          if ((uVar2 != 0x16) &&
             ((uVar2 != 0x1f || (0x13 < *(ulong *)(param_3 + lVar18 * 0x28 + 0x18)))))
          goto LAB_00168fc0;
LAB_00169014:
          cVar15 = '\x02';
        }
        plVar14 = (long *)(param_1 + 8)[uVar19 & 0x7f];
        if (plVar14 == (long *)0x0) {
          uVar7 = 0xffffffffffffffff;
          if (uVar2 < 0x3d) goto LAB_001690f0;
joined_r0x00169184:
          uVar5 = uVar7;
          if (cVar15 == '\0') {
            local_70 = 0;
            _local_68 = 0;
            local_78 = 0;
            if (uVar5 == 0xffffffffffffffff) {
              iVar3 = FUN_0016b118(&local_78,pbVar4,__n,lVar8);
              if (iVar3 != 0) goto LAB_00168ecc;
            }
            else {
              if (uVar5 < 0x3d) {
                local_78 = uVar5 * 0x80 + 0x4836828;
              }
              else {
                local_78 = **(ulong **)(*param_1 + ((uVar5 + param_1[2]) - 0x3d & param_1[1]) * 8);
              }
              FUN_0016b17c();
            }
            lVar10 = param_3 + lVar18 * 0x28;
            iVar3 = FUN_0016b118(&local_70,*(undefined8 *)(lVar10 + 8),
                                 *(undefined8 *)(lVar10 + 0x18),lVar8);
            if (iVar3 != 0) {
              FUN_0016b194(local_78);
              goto LAB_00168ecc;
            }
            local_68 = (uint5)uVar2;
            iVar3 = FUN_0016ad18(param_1,&local_78,param_1 + 8,uVar19);
            FUN_0016b194(local_70);
            FUN_0016b194(local_78);
            if (iVar3 != 0) {
              iVar3 = -0x20b;
              goto LAB_00168ecc;
            }
          }
          if (uVar5 != 0xffffffffffffffff) goto LAB_0016926c;
          iVar3 = FUN_00169eac(param_2,puVar13,cVar15);
        }
        else {
          lVar10 = param_3 + lVar18 * 0x28;
          plVar17 = (long *)0x0;
          do {
            if ((*(uint *)(plVar14 + 2) == uVar2) &&
               ((uVar2 != 0xffffffff ||
                (((*(uint *)((long)plVar14 + 0x4c) == uVar19 &&
                  (*(size_t *)(*plVar14 + 0x18) == __n)) &&
                 (iVar3 = memcmp(*(void **)(*plVar14 + 0x10),pbVar4,__n), iVar3 == 0)))))) {
              plVar1 = plVar17;
              if (plVar17 == (long *)0x0) {
                plVar1 = plVar14;
              }
              if ((cVar15 == '\x02') && (plVar17 == (long *)0x0)) {
                plVar17 = plVar14;
                break;
              }
              sVar6 = *(size_t *)(plVar14[1] + 0x18);
              plVar17 = plVar1;
              if ((sVar6 == *(size_t *)(lVar10 + 0x18)) &&
                 (iVar3 = memcmp(*(void **)(plVar14[1] + 0x10),*(void **)(lVar10 + 8),sVar6),
                 iVar3 == 0)) {
                uVar5 = (ulong)((int)param_1[7] + ~*(uint *)(plVar14 + 9) + 0x3d);
                goto LAB_001692d4;
              }
            }
            plVar14 = (long *)plVar14[8];
          } while (plVar14 != (long *)0x0);
          if (0x3c < uVar2) {
            if (plVar17 == (long *)0x0) {
              uVar7 = 0xffffffffffffffff;
            }
            else {
              uVar7 = (ulong)((int)param_1[7] + ~*(uint *)(plVar17 + 9) + 0x3d);
            }
            goto joined_r0x00169184;
          }
LAB_001690f0:
          if (cVar15 != '\x02') {
            lVar10 = -1;
            lVar11 = param_3 + lVar18 * 0x28;
            psVar16 = (size_t *)(&DAT_04836868 + uVar5 * 0x80);
LAB_0016911c:
            uVar7 = uVar5;
            if ((uint)psVar16[7] == uVar2) {
              if ((*psVar16 != *(size_t *)(lVar11 + 0x18)) ||
                 (iVar3 = memcmp((void *)psVar16[-1],*(void **)(lVar11 + 8),*psVar16), iVar3 != 0))
              goto LAB_00169148;
              uVar5 = uVar5 + lVar10 + 1;
LAB_001692d4:
              local_78 = 0;
              local_70 = 0;
              if (uVar5 + 1 < 0x7f) {
                lVar8 = 1;
                local_78 = (ulong)(byte)((byte)(uVar5 + 1) | 0x80);
LAB_00169398:
                iVar3 = FUN_0016b500(param_2,&local_78,lVar8);
              }
              else {
                uVar5 = uVar5 - 0x7e;
                if (uVar5 < 0x80) {
                  lVar8 = 2;
                  pbVar4 = (byte *)((ulong)&local_78 | 1);
LAB_00169394:
                  local_78 = 0xff;
                  *pbVar4 = (byte)uVar5;
                  goto LAB_00169398;
                }
                lVar8 = 2;
                uVar7 = uVar5;
                do {
                  lVar10 = lVar8;
                  uVar12 = uVar7 >> 0xe;
                  uVar7 = uVar7 >> 7;
                  lVar8 = lVar10 + 1;
                } while (uVar12 != 0);
                iVar3 = -0x20b;
                if (lVar10 - 1U < 0xf) {
                  pbVar9 = (byte *)((ulong)&local_78 | 1);
                  do {
                    pbVar4 = pbVar9 + 1;
                    *pbVar9 = (byte)uVar5 | 0x80;
                    uVar7 = uVar5 >> 0xe;
                    uVar5 = uVar5 >> 7;
                    pbVar9 = pbVar4;
                  } while (uVar7 != 0);
                  goto LAB_00169394;
                }
              }
              goto LAB_00169298;
            }
            goto joined_r0x00169184;
          }
LAB_0016926c:
          iVar3 = FUN_00169d98(param_2,uVar5,puVar13,cVar15);
        }
LAB_00169298:
        if (iVar3 != 0) goto LAB_00168ecc;
        lVar18 = lVar18 + 1;
      } while (lVar18 != param_4);
    }
    iVar3 = 0;
  }
  else {
    uVar5 = param_1[0x89];
    *(undefined1 *)(param_1 + 0x8a) = 0;
    param_1[0x89] = 0xffffffff;
    uVar7 = param_1[6];
    if (uVar5 < uVar7) {
      iVar3 = FUN_001693f0(param_2);
      if (iVar3 == 0) {
        uVar7 = param_1[6];
        goto LAB_00168eb8;
      }
    }
    else {
LAB_00168eb8:
      iVar3 = FUN_001693f0(param_2,uVar7);
      if (iVar3 == 0) goto LAB_00168ed8;
    }
LAB_00168ecc:
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  return iVar3;
LAB_00169148:
  lVar10 = lVar10 + 1;
  psVar16 = psVar16 + 0x10;
  if (0x3b < (int)(uVar2 + (int)lVar10)) goto joined_r0x00169184;
  goto LAB_0016911c;
}

